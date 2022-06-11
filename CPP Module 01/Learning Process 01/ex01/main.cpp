/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:09:31 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/11 13:55:21 by mkaruvan         ###   ########.fr       */
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
}

int main()
{
	std::string name;
	int N;

	init_zombie();
	std::cout << "Enter the name for your Zombie Horde: ";
	std::getline(std::cin, name);
	std::cout << "Enter the how many zombies you need: ";
	std::cin >> N;
	delete [] (zombieHorde(N, name));
	return (0);
}