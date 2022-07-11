/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:30:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 10:15:07 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat A("Ram", 151);
	}
	{
		Bureaucrat C("One", 5);
		C.grade_decrement();
		std::cout << C;
	}
	{
		Bureaucrat B("john", 151);
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