/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:13:00 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/20 09:23:33 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->setType(str);
}

std::string& Weapon::detType()
{
	return (this->_type);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
}