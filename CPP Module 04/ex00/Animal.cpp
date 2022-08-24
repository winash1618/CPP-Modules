/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:46:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:18:37 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called." << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called." << std::endl;
	*this = src;
	return;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Copy assignment operator called." << std::endl;
	this->type = rhs.type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called. " << std::endl;
}

void Animal::makeSound(void) const 
{
	std::cout << "Hello, i am an Animal" << std::endl;
}

std::string Animal::getType(void) const 
{
	return (this->type);
}