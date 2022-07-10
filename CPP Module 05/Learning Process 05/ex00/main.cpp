/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:30:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 09:55:37 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat A("Ram", 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	{
		Bureaucrat C("One", 5);
		C.grade_decrement();
		std::cout << C;
	}
	{
		Bureaucrat B("john", 1);
		B.grade_increment();
		std::cout << B;
	}
	{
		Bureaucrat D("Adam", 150);
		D.grade_decrement();
		std::cout << D;
	}
	return (0);
}