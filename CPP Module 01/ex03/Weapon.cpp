/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:13:00 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/03 15:07:27 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	
}

Weapon::~Weapon(void)
{
	
}

Weapon::Weapon(std::string str) : _type(str)
{
}

std::string const & Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}