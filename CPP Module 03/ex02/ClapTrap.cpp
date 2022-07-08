/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:04:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/19 10:10:15 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Name constructor called." << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called. " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	this->_hitPoints = this->_hitPoints - this->_attackDamage;
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_attackDamage = this->_attackDamage + amount;
	std::cout << "Attack damage after taking attack" << this->_attackDamage << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints = this->_energyPoints - 1;
	this->_hitPoints = this->_hitPoints + amount;
	std::cout << "Energy Points after repair: " << this->_energyPoints << std::endl;
	std::cout << "Hit points after repair: " << this->_hitPoints << std::endl;
}
