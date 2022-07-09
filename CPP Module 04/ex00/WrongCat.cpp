/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:27:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/09 13:19:19 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong Cat Destructor called. " << std::endl;
}

void WrongCat::makeSound(void) const 
{
	std::cout << "Hello, i am a WrongCat" << std::endl;
}
