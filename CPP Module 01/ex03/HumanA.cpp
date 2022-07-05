/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:14:20 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/04 08:50:16 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string str, Weapon & B) : _A(B)
{
	this->_name = str;
}

HumanA::~HumanA(void)
{
	
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_A.getType() << std::endl;
}
