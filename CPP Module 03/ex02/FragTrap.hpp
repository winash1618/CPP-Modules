/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:04:27 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/19 17:57:45 by mkaruvan         ###   ########.fr       */
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
	private:
		std::string _name;
		int _hitPoints = 100;
		int _energyPoints = 100;
		int _attackDamage = 30;
};

#endif