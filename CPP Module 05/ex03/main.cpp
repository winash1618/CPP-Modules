/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:30:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/25 10:36:18 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	// {
	// 	Bureaucrat B("john", 39);
	// 	ShrubberyCreationForm A("target");
	// 	B.signForm(A);
	// 	A.execute(B);
	// }
	// {
	// 	Bureaucrat B("john", 39);
	// 	RobotomyRequestForm A("target");
	// 	B.signForm(A);
	// 	A.execute(B);
	// }
	// {
	// 	Bureaucrat B("john", 7);
	// 	PresidentialPardonForm A("target");
	// 	B.signForm(A);
	// 	std::cout << A.getGrade2Exec() << std::endl;
	// 	std::cout << A.getGrade2Sign() << std::endl;
	// 	std::cout << A.getName();
	// 	A.execute(B);
	// }
	// {
	// 	Intern someRandomIntern;
	// 	Form* rrf;
	// 	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	// 	delete rrf;
	// }
	std::string formName = "shrubbery creation"; 
	std::string formTarget = "Bender";
	if (formName.empty() || formTarget.empty()) 
	{
			throw std::invalid_argument("Invalid parameters");
	}
	Intern intern;
	Bureaucrat bureaucrat("Martin", 1);
	Form *f = intern.makeForm(formName, formTarget);
	std::cout << *f;
	bureaucrat.signForm(*f);
	f->execute(bureaucrat);
	delete f;
}