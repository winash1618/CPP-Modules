/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:54:54 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/24 21:15:28 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src) : Animal()
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (&rhs == this)
	{
		return (*this);
	}
	this->type = rhs.type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called. " << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Hello, i am an Dog" << std::endl;
}
