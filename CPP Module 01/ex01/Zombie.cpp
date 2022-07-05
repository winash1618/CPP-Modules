/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:09:35 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/03 14:56:47 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie( void )
{
	std::cout << "zombie died" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
