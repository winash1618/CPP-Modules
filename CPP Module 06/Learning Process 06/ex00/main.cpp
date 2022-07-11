/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:12:32 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/11 14:15:19 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main()
{
	Convert a("1.235f");
	float b = a;
	// int c = a;
	// char d = a;
	// double e = a;

	std::cout << a.getStr() << std::endl;
	std::cout << b << std::endl;

	std::cout << 44.4f << std::endl;
	// std::cout << c << std::endl;
	// std::cout << d << std::endl;
	// std::cout << e << std::endl;
	
	return (0);
}