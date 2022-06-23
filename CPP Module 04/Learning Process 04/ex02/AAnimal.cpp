/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:07:22 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/22 18:13:19 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default AAnimal constructor called." << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << " AAnimal Destructor called. " << std::endl;
}

// void AAnimal::makeSound(void) const 
// {
// 	std::cout << "Hello, i am an AAnimal" << std::endl;
// }

std::string AAnimal::getType(void) const 
{
	return (this->type);
}