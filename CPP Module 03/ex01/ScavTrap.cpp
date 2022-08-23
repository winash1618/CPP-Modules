/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:58:17 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:20:41 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap Default constructor called." << std::endl;
	this->_name = "NOT SET";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// ScavTrap::ScavTrap(std::string name) // if you call this constructor it will only call the default constructor of ClapTrap not the one with name string
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called." << std::endl;
	this->_name = name;
	if (!this->_name.length())
		this->_name = "NOT SET";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	*this = src;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->_energyPoints)
		std::cout << "ScavTrap " << this->_name << " have no energy points left!." << std::endl;
	else if (!this->_hitPoints)
		std::cout << "ScavTrap " << this->_name << " have no hit points left!" << std::endl;
	if (!this->_energyPoints || !this->_hitPoints)
		return ;
	this->_energyPoints = this->_energyPoints - 1;
	if (target.length())
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap " <<this->_name << " attacks " << "Enemy Not Set" << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called. " << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
