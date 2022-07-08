/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:04:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/08 15:40:16 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->_name = "NOT SET";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "name constructor called." << std::endl;
	this->_name = name;
	if (!this->_name.length())
		this->_name = "NOT SET";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
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
	if (!this->_energyPoints)
		std::cout << this->_name << " have no energy points left!." << std::endl;
	else if (!this->_hitPoints)
		std::cout << this->_name << " have no hit points left!" << std::endl;
	if (!this->_energyPoints || !this->_hitPoints)
		return ;
	this->_energyPoints = this->_energyPoints - 1;
	if (target.length())
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	else
		std::cout << this->_name << " attacks " << "Enemy Not Set" << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << "Invalid damage value" << std::endl;
		return ;
	}
	if (amount > this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << this->_name << " have " << this->_hitPoints << " hit points left." << std::endl;
		return ;
	}
	else
	{
		this->_hitPoints = this->_hitPoints - amount;
		std::cout << this->_name << " have " << this->_hitPoints << " hit points left." << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energyPoints)
		std::cout << this->_name << " have no energy points left!." << std::endl;
	else if (!this->_hitPoints)
		std::cout << this->_name << " have no hit points left!." << std::endl;
	if (!this->_energyPoints || !this->_hitPoints)
		return ; 
	this->_energyPoints = this->_energyPoints - 1;
	this->_hitPoints = this->_hitPoints + amount;
	std::cout << this->_name << " have " << this->_energyPoints << " energy points left after repairing!" << std::endl;
	std::cout << this->_name << " have " << this->_hitPoints << " hit points after repairing!" << std::endl;
}
