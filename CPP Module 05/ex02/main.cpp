/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:30:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/27 14:19:31 by mkaruvan         ###   ########.fr       */
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
	// 	B.executeForm(A);
	// }
	// {
	// 	Bureaucrat B("john", 19);
	// 	RobotomyRequestForm A("target");
	// 	B.signForm(A);
	// 	B.executeForm(A);
	// }
	{
		Bureaucrat B("john",3);
		PresidentialPardonForm A("target");
		B.signForm(A);
		B.executeForm(A);
	}
}