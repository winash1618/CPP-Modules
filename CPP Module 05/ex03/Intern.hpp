/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:55:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/25 10:13:11 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Intern {
	public:
		Intern();
		Intern(Intern const &);
		Intern &operator=(Intern const &);
		~Intern();
		
		Form *makeForm(std::string, std::string);
	private:
		Form *(Intern::*funcPtr[3])(std::string);
		Form *ShrubberyCreation(std::string);
		Form *RobotomyRequest(std::string);
		Form *PresidentialPardon(std::string);
};

#endif