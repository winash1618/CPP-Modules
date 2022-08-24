/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:27:36 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/24 21:15:35 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal constructor called." << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
	*this = src;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal Copy assignment operator called." << std::endl;
	if (&rhs == this)
	{
		return (*this);
	}
	this->type = rhs.getType();
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal Destructor called. " << std::endl;
}

void WrongAnimal::makeSound(void) const 
{
	std::cout << "Hello, i am an WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const 
{
	return (this->type);
}