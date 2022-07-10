/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:54:54 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 06:28:21 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
	this->B = new Brain();
	setBrainIdeas();
}

Dog::Dog(Dog const & src) : Animal()
{
	std::cout << "Dog Copy constructor called." << std::endl;
	*this = src;
	setBrainIdeas();
	return;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy assignment operator called." << std::endl;
	this->type = rhs.type;
	this->B = new Brain;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called. " << std::endl;
	delete this->B;
}

void Dog::makeSound(void) const
{
	std::cout << "Hello, i am an Dog" << std::endl;
}

std::string Dog::getType(void) const
{
	return (this->type);
}

void Dog::getBrainIdeas(void)
{
	int i = 0;
	while (i < 5)
	{
		std::cout << this->B->ideas[i] << std::endl;
		i++;
	}
}

void Dog::setBrainIdeas(void)
{
	std::string randomIdeas[5] = {"I am Walking", "Clear the Area", "Get out of here", "Add your brain", "Implement this well"};
	int i = 0;
	while (i < 100)
	{
		this->B->ideas[i] = randomIdeas[rand() % 5];
		i++;
	}
}