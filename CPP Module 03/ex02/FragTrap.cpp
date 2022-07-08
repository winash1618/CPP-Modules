/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:10:25 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/08 17:37:44 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default constructor called." << std::endl;
	this->_name = "NOT SET";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap Name constructor called." << std::endl;
	this->_name = name;
	if (!this->_name.length())
		this->_name = "NOT SET";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

// FragTrap::FragTrap(FragTrap const & src) // this will call the default ClapTrap constructor.
FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called. " << std::endl;
}

void FragTrap::highFiveGuys( void )
{
	std::cout << "FragTrap "<< "Give me a High Five guys" << std::endl;
}
