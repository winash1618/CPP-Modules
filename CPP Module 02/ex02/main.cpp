/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:25:35 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/05 18:40:01 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	// std::cout << "HI :: " << Fixed (5.05f) << std::endl;
	// std::cout << "HI :: " << Fixed (2) << std::endl;
	// std::cout << "HI :: " << Fixed( 5 ) / Fixed( 2 ) << std::endl;
	
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed a1( Fixed( 2 ) );
	// Fixed(Fixed(5.05f) * Fixed(2));
	// Fixed(Fixed(5.05f) / Fixed(2));
	// Fixed(Fixed(5.05f) + Fixed(2));
	// Fixed(Fixed(5.05f) - Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	if (a < b)
	{
		std::cout << a << std::endl;
	}
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( a1, a ) << std::endl;
	return 0;
}
