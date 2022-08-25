/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:55:53 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/25 10:04:43 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern Default Constructor called" << std::endl;
	this->funcPtr[0] = &Intern::ShrubberyCreation;
	this->funcPtr[1] = &Intern::RobotomyRequest;
	this->funcPtr[2] = &Intern::PresidentialPardon;
}

Intern::Intern(Intern const &source) {
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = source;
}

Intern &Intern::operator=(Intern const &data) {
	std::cout << "Intern Copy Assignment Operator called" << std::endl;
	(void)data;
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern Destructor called" << std::endl;
}

Form *Intern::ShrubberyCreation(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form *Intern::RobotomyRequest(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form *Intern::PresidentialPardon(std::string target) {
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string formName, std::string target) {
	std::string formTypes[3] = { "shrubbery creation",
								 "robotomy request",
								 "presidential pardon" };
	for (int i = 0; i < 3; i++) {
		if (!formName.compare(formTypes[i])) {
			std::cout <<  "Intern complete " << formTypes[i] << " Form" << std::endl;
			return (this->*funcPtr[i])(target);
		}
	}
	throw std::out_of_range("Provided form name does not exist within the selection of forms");
}
