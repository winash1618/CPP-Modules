/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:52:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:37:09 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
	this->A = new Brain();
	setBrainIdeas();
}

Cat::Cat(Cat const & src) : Animal()
{
	std::cout << "Cat Copy constructor called." << std::endl;
	*this = src;
	// this->type = src.type;
	// this->A = new Brain; // this makes a deep copy
	// this->A = src.A; // this makes a shallow copy
	return;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy assignment operator called." << std::endl;
	this->type = rhs.type;
	this->A = new Brain;
	setBrainIdeas();
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called. " << std::endl;
	delete this->A;
}

void Cat::makeSound(void) const 
{
	std::cout << "Hello, i am a Cat" << std::endl;
}

void Cat::getBrainIdeas(void)
{
	int i = 0;
	while (i < 5)
	{
		std::cout << this->A->ideas[i] << std::endl;
		i++;
	}
}

void Cat::setBrainIdeas(void)
{
	std::string randomIdeas[5] = {"I am Walking", "Clear the Area", "Get out of here", "Add your brain", "Implement this well"};
	int i = 0;
	while (i < 100)
	{
		this->A->ideas[i] = randomIdeas[rand() % 5];
		i++;
	}
}