/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:58:21 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/08 18:33:55 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap :  virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap(std::string);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap( void );
		virtual void attack(const std::string& target);
		virtual void guardGate( void );
	// private:
	// 	std::string _name;
	// 	int _hitPoints;
	// 	int _energyPoints;
	// 	int _attackDamage;
};

#endif