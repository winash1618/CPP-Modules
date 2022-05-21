/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 05:53:06 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/20 07:02:17 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* foo = new Zombie(name);
	std::cout << "zombie got killed: " << name << std::endl;
	return (foo);
}