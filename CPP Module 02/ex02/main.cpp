/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:25:35 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/21 17:43:34 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	// Fixed a;
	// std::cout << "HI :: " << Fixed (5.05f) << std::endl;
	// std::cout << "HI :: " << Fixed (2) << std::endl;
	// std::cout << "HI :: " << Fixed( 5 ) / Fixed( 2 ) << std::endl;
	
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed(Fixed(5.05f) * Fixed(2));
	// Fixed(Fixed(5.05f) / Fixed(2));
	// Fixed(Fixed(5.05f) + Fixed(2));
	// Fixed(Fixed(5.05f) - Fixed(2));
	

	std::cout << std::endl;
	std::cout << "Basic tests" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;




	std::cout << std::endl;
	std::cout << "Min - Max Tests" << std::endl;
	Fixed a1( Fixed( 2 ) );
	std::cout << "max("<< a << " & " << b << ")" << " : " << Fixed::max( a, b ) << std::endl;
	std::cout << "min("<< a1 << " & " << a << ")" << " : " << Fixed::min( a1, a ) << std::endl;
	std::cout << std::endl;



	
	std::cout << "Arithmetic operator tests" << std::endl;
	Fixed n1 = 150, n2 = 5.7f, n3 = 2.5f;
	// std::cout << n2 + n3 << std::endl;
	std::cout  << n1 << " + " << n2 << " + " << n3 << " = " << (n1 + n2 + n3) << std::endl
			   << n1 << " - " << n2 << " - " << n3 << " = " << (n1 - n2 - n3) << std::endl
			   << n1 << " * " << n2 << " * " << n3 << " = " << (n1 * n2 * n3) << std::endl
			   << n1 << " / " << n2 << " / " << n3 << " = " << (n1 / n2 / n3) << std::endl;
	std::cout << std::endl;
	
	
	
	
	std::cout << "Comparison operator tests" << std::endl;
	n1 = 5, n2 = 10;
	std::cout << n1 << " > " << n2 << " = " << std::boolalpha << (n1 > n2) << std::endl;
	std::cout << n1 << " < " << n2 << " = " << std::boolalpha << (n1 < n2) << std::endl;
	std::cout << n1 << " >= " << n2 << " = " << std::boolalpha << (n1 >= n2) << std::endl;
	std::cout << n1 << " <= " << n2 << " = " << std::boolalpha << (n1 <= n2) << std::endl;
	std::cout << n1 << " == " << n2 << " = " << std::boolalpha << (n1 == n2) << std::endl;
	std::cout << n1 << " != " << n2 << " = " << std::boolalpha << (n1 != n2) << std::endl;
	std::cout << std::endl;
	
	
	
	
	std::cout << "Increment operator tests" << std::endl;
	Fixed num = 10;
	std::cout << "num = " << num << std::endl
			  << "num++ = " << num++ << std::endl
			  << "num = " << num << std::endl
			  << "++num = " << ++num << std::endl;
	
	
	
	
	std::cout << "\nDecrement Overload Tests" << std::endl
			  << "num = " << num << std::endl
			  << "num-- = " << num-- << std::endl
			  << "num = " << num << std::endl
			  << "--num = " << --num << std::endl;
	
return 0;
}
