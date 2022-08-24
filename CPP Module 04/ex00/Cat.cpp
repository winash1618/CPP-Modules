/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:52:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:18:46 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const & src) : Animal()
{
	std::cout << "Cat Copy constructor called." << std::endl;
	*this = src;
	return;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy assignment operator called." << std::endl;
	this->type = rhs.type;
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
