/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:27:42 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:19:32 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal()
{
	std::cout << "WrongCat Copy constructor called." << std::endl;
	*this = src;
	return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat Copy assignment operator called." << std::endl;
	this->type = rhs.getType();
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

std::string WrongCat::getType( void ) const 
{
	return (this->type);
}
