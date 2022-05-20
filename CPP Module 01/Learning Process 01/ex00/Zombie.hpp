/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:37:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/18 18:37:05 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <string>
// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Zombie
{
	public:
		Zombie::Zombie(void);
		Zombie::~Zombie(void);
		void announce( void );
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
	private:
		std::string _name;
};

#endif /* __ZOMBIE_H__ */