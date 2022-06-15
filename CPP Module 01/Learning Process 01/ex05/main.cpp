/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:58:23 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/15 10:49:54 by mkaruvan         ###   ########.fr       */
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
	std::string messege;
	Harl jim;

	init_harl();
	std::cout << "Comments available: " << std::endl;
	std::cout << "1. DEBUG 2. INFO 3. WARNING 4. ERROR" << std::endl;
	std::cout << "Enter the comment: ";
	std::getline(std::cin, messege);
	jim.complain(messege);
	return (0);
}