/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:14:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/12 10:58:17 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(void)
{
	
}

HumanB::HumanB(std::string str)
{
	this->name = str;
	this->flag = 0;
}

HumanB::~HumanB(void)
{
	
}

void HumanB::attack( void )
{
	if (flag)
		std::cout << this->name << " attacks with their " << this->A->getType() << std::endl;
	else
		std::cout << this->name << " is not Armed " << std::endl;
}

void HumanB::setWeapon( Weapon &B )
{
	this->A = &B;
	this->flag = 1;
	
}