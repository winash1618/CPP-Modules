/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:30:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 18:53:49 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	{
		Bureaucrat B("john", 7);
		PresidentialPardonForm A("target");
		B.signForm(A);
		std::cout << A.getGrade2Exec() << std::endl;
		std::cout << A.getGrade2Sign() << std::endl;
		std::cout << A.getName();
		A.execute(B);
	}
}