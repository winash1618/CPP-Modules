/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:58:21 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:36:22 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap(std::string);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap( void );
		void attack(const std::string& target);
		void guardGate( void );
	// private:
	// 	std::string _name;
	// 	int _hitPoints;
	// 	int _energyPoints;
	// 	int _attackDamage;
};

#endif