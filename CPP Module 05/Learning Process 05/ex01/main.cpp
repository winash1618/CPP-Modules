/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:30:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 11:31:31 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// Form A("Security", 80, 42);
	// {
	// 	Bureaucrat B("Jen", 100);
	// 	B.signForm(A);
	// 	std::cout << A;
	// 	std::cout << B;	
	// }
	// {
	// 	Bureaucrat B("Hal", 60);
	// 	B.signForm(A);
	// 	std::cout << A;
	// 	std::cout << B;	
	// }
	{
		Form A("Dono", 123, 45);
		Form Acopy = A;
		std::cout << Acopy;
	}
}