/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:52:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/22 13:38:08 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called. " << std::endl;
}

void Cat::makeSound(void) const 
{
	std::cout << "Hello, i am a Cat" << std::endl;
}

std::string Cat::getType( void ) const 
{
	return (this->type);
}