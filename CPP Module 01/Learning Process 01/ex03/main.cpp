/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:14:45 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/11 18:15:03 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"
// #include "HumanB.hpp"

int main()
{
	Weapon A = Weapon("dsf");
	std::cout << A.getType() << std::endl;
	// {
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	// }
	// {
	// Weapon club = Weapon("crude spiked club");
	// HumanB jim("Jim");
	// jim.setWeapon(club);
	// jim.attack();
	// club.setType("some other type of club");
	// jim.attack();
	// }
	return 0;
}
