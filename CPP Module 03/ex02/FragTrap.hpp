/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:04:27 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:21:14 by mkaruvan         ###   ########.fr       */
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