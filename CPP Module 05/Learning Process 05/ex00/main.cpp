/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:30:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/25 18:45:46 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	const std::string r;
	Bureaucrat B("john", 1);
	B.grade_increment();
	std::cout << B;
	Bureaucrat A("Ram", 150);
	A.grade_decrement();
	std::cout << A;
	
}