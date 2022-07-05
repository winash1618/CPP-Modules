/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:37:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/03 14:13:47 by mkaruvan         ###   ########.fr       */
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
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
		void announce( void );
	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif /* __ZOMBIE_H__ */