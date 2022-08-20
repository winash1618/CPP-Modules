/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:09:31 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/20 13:51:25 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

std::string get_input(void)
{
	std::string str;

	do
	{
		if (!getline(std::cin, str))
			exit(0);
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
}

int main()
{
	std::string name;
	int N;

	init_zombie();
	std::cout << "Enter the name for your Zombie Horde: ";
	name = get_input();
	std::cout << "Enter the how many zombies you need: ";
	std::cin >> N;
	delete [](zombieHorde(N, name));
	return (0);
}