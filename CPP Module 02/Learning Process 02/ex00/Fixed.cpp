/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:04:39 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/15 16:28:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _float( 0 )
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed( int const n ) : _float( n )
{
	std::cout << "Constructor called." << std::endl;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called." << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if ( this != &rhs )
		this->_float = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return this->_float;
}

void Fixed::setRawBits( int const raw )
{
	this->_float = raw;
}