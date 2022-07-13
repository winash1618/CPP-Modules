/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:58:23 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/05 08:40:28 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

void init_harl(void)
{
	std::cout << "#################################################" << std::endl;
	std::cout << "################### HARL 2.0 ####################" << std::endl;
	std::cout << "#################################################" << std::endl;
	std::cout << std::endl;
}

std::string get_input(void)
{
	std::string str;

	do
	{
		if (!getline(std::cin, str))
			_Exit(0);
	}
	while (str.empty());
	return (str);
}

int main()
{
	Harl jim;

	init_harl();
	std::cout << "Comments available: " << std::endl;
	std::cout << "1. DEBUG 2. INFO 3. WARNING 4. ERROR" << std::endl;
	std::cout << "Enter the comment: ";
	jim.complain(get_input());
	return (0);
}