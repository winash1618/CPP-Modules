/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:14:20 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/12 10:56:36 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(void)
{
	
}

HumanA::HumanA(std::string str, Weapon &B)
{
	this->name = str;
	this->A = &B;
	// std::cout << this->A << " " << &B << std::endl;
}

HumanA::~HumanA(void)
{
	
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->A->getType() << std::endl;
}
