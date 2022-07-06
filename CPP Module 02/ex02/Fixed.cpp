/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:26:23 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/05 17:40:13 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _float( 0 )
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed( int const n )
{
	std::cout << "Int Constructor called." << std::endl;
	setRawBits( n << this->_frac_bits );
}

Fixed::Fixed( float const n )
{
	std::cout << "Float Constructor called." << std::endl;
	setRawBits(roundf(n * ( 1 << this->_frac_bits )));
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

//----------------------------------------------------------------//
//------------------ Normal functions ----------------------------//
//----------------------------------------------------------------//

int Fixed::getRawBits( void ) const
{
	return this->_float;
}

void Fixed::setRawBits( int const raw )
{
	this->_float = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

float Fixed::toFloat( void ) const
{
	return(roundf(this->_float) /( 1 << this->_frac_bits ));
}

int Fixed::toInt( void ) const
{
	return (this->_float >> this->_frac_bits); 
}

//--------------Arithmetic operators---------------------//
Fixed Fixed::operator+(Fixed const & rhs)
{
	float f1 = rhs.getRawBits() / 256;
	float f2 = this->toFloat();
	return Fixed( f1 + f2 );
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	float f1 = rhs.getRawBits() / 256;
	float f2 = this->toFloat();
	return Fixed( f1 - f2 );
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	float f1 = rhs.getRawBits() / 256;
	float f2 = this->toFloat();
	return Fixed(f1 * f2 );
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	float f1 = rhs.getRawBits() / 256;
	float f2 = this->toFloat();
	return Fixed( f2 / f1 );
}

//--------------Comparison operators---------------------//
bool Fixed::operator<(Fixed const & rhs)
{
	return (this->_float < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs)
{
	return (this->_float > rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->_float <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->_float >= rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->_float != rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->_float == rhs.getRawBits());
}

//--------------Increment/Decrement operators-----------//
Fixed & Fixed::operator++( void )// prefix increment
{
	this->_float = this->_float + 1;
	return *this;
}

Fixed Fixed::operator++( int )// postfix increment
{
	Fixed old = *this;
	Fixed::operator++();
	return old;
}

Fixed& Fixed::operator--( void )// prefix decrement
{
	this->_float = this->_float - 1;
	return *this;
}

Fixed Fixed::Fixed::operator--( int )// postfix decrement
{
	Fixed old = *this;
	Fixed::operator--();
	return old;
}
