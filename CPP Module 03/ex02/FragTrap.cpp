/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:10:25 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/19 17:59:32 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
}

FragTrap::FragTrap(FragTrap const & src)
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
	std::cout << "Destructor called. " << std::endl;
}

void highFiveGuys( void )
{
	std::cout << "Give me a High Five guys" << std::endl;
}
