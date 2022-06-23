/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:58:21 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/19 10:19:12 by mkaruvan         ###   ########.fr       */
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
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		ScavTrap( std::string );
		~ScavTrap( void );
		void guardGate( void );
	private:
		std::string _name;
		int _hitPoints = 100;
		int _energyPoints = 50;
		int _attackDamage = 20;
};

#endif