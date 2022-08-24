/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:46:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/24 07:14:58 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**
 * @brief Construct a new Animal:: Animal object
 * https://www.programiz.com/cpp-programming/virtual-functions
 * A virtual function is a member function in the base class that we expect to redefine in derived classes.
 * Basically, a virtual function is used in the base class in order to ensure that the function is overridden.
 * This especially applies to cases where a pointer of base class points to an object of a derived class.
 * Animal *c = new Dog()
 * c->makesound();
 * Here makesound() in Animal class is defined as virtual so the derived class Dog()'s makesound will be called.
 * if makesound() not present in derived class then Animal base class makesound will be called.
 */

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called." << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << " Animal Destructor called. " << std::endl;
}

void Animal::makeSound(void) const 
{
	std::cout << "Hello, i am an Animal" << std::endl;
}

std::string Animal::getType(void) const 
{
	return (this->type);
}