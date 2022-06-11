/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:13:00 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/11 17:19:52 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->setType(str);
}

Weapon::~Weapon()
{
	
}

std::string& Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}