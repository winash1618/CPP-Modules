/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:35:18 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 18:58:09 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon Form", 25, 5), _target("target")
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : _target(target), Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm target constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
	std::cout << "PresidentialPardonForm copy Constructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called." << std::endl;
	if (this != &rhs)
		const_cast<std::string &>(this->_target) = rhs.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (executor.getGrade() <= this->getGrade2Exec() && this->getSign())
		{
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
		else
		{
			throw std::out_of_range(" Bureaucrat Zaphod Beeblebrox lacks grade to execute the form!");
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}