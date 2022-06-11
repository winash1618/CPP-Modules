/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:14:20 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/11 18:39:23 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string str, Weapon& A) : A("")
{
	this->name = str;
	this->A = A;
}

HumanA::~HumanA(void)
{
	
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->A.getType();
}
