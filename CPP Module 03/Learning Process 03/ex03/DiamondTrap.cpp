/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:50:53 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/08 18:28:01 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called." << std::endl;
	this->_name = "NOT SET";
	this->_hitPoints = FragTrap::_hitPoints;
	ScavTrap::_energyPoints = 10;
	FragTrap::_attackDamage = 0;
}

DiamondTrap::DiamondTrap(std::string)
{

}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{

}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{

}

DiamondTrap::~DiamondTrap(void)
{
	
}

void DiamondTrap::whoAmI(void)
{
	
}