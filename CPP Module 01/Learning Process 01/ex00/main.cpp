/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 05:54:37 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/03 13:39:57 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

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
	std::string name;
	
	std::cout << "Enter the name for your zombie: ";
	std::getline(std::cin, name);
	if(str.compare("1") == 0)
		randomChump(name);
	else if (str.compare("2") == 0)
		delete(newZombie(name));
}

int main()
{
	std::string str;

	init_zombie();
	str = get_input();
	if (str.compare("1") == 0 || str.compare("2") == 0)
		zombie_world(str);
}