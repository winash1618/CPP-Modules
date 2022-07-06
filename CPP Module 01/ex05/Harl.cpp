/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:01:18 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/15 10:50:21 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) 
{
	this->fptr[0] = &Harl::debug;
	this->fptr[1] = &Harl::info;
	this->fptr[2] = &Harl::warning;
	this->fptr[3] = &Harl::error;
}

Harl::~Harl () {}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now. " << std::endl;
}

void Harl::error( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since las month." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (!level.compare(message[i])) {
			(this->*fptr[i])();
			return;
		}
	}
}