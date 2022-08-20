/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:58:23 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/20 15:02:21 by mkaruvan         ###   ########.fr       */
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

int main()
{
	// std::string messege;
	Harl jim;

	init_harl();
	std::cout << "Comments available: " << std::endl;
	std::cout << "1. DEBUG 2. INFO 3. WARNING 4. ERROR" << std::endl;
	// std::cout << "Enter the comment: ";
	// do
	// {
	// 	if (!getline(std::cin, messege))
	// 		exit(0);
	// }
	// while (messege.empty());
	jim.complain("DEBUG");
	std::cout << std::endl;
	jim.complain("INFO");
	std::cout << std::endl;
	jim.complain("WARNING");
	std::cout << std::endl;
	jim.complain("ERROR");
	std::cout << std::endl;
	jim.complain("ERRORFD");
	return (0);
}