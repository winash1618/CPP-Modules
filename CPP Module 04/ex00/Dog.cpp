/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:54:54 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/09 13:27:16 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
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

std::string Dog::getType(void) const
{
	return (this->type);
}