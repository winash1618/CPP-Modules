/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 05:54:37 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/20 06:13:05 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

void init_zombie(void)
{
	std::cout << "#################################################" << std::endl;
	std::cout << "################### ZOMBIE WORLD ################" << std::endl;
	std::cout << "#################################################" << std::endl;
	std::cout << std::endl;
	std::cout << "Available options:                " << std::endl;
	std::cout << "     1. CREATE ZOMBIE AND ANNOUNCE" << std::endl;
	std::cout << "     2. CREATE ZOMBIE AND KILL" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your choice: ";
}

void zombie_world(std::string str)
{
	if(str == "1")
		
}

int main()
{
	std::string str;

	init_zombie();
	std::getline(std::cin, str);
	zombie_world(str);
}