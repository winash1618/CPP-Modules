/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:04:27 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/08 17:27:50 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap :  public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string );
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap( void );
		void highFiveGuys( void );
	// private:
	// 	std::string _name;
	// 	int _hitPoints;
	// 	int _energyPoints;
	// 	int _attackDamage;
};

#endif