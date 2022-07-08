/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:58:17 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/19 17:59:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Name constructor called." << std::endl;
	this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called. " << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
