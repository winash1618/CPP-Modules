/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:51:06 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/15 16:58:52 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a class in Orthodox Canonical Form that represents a fixed-point number:
	• Private members:
		◦ An integer to store the fixed-point number value.
		◦ A static constant integer to store the number of fractional bits. Its value
			will always be the integer literal 8.
	 Public members:
		◦ A default constructor that initializes the fixed-point number value to 0.
		◦ A copy constructor.
		◦ A copy assignment operator overload.
		◦ A destructor.
		◦ A member function int getRawBits( void ) const;
			that returns the raw value of the fixed-point value.
		◦ A member function void setRawBits( int const raw );
			that sets the raw value of the fixed-point number.
*/

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

	public:
		Fixed( void );							//canonical
		Fixed( Fixed const & src);			//canonical
		~Fixed( void );						//canonical
		Fixed & operator=(Fixed const & rhs);	//canonical
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int _float;
		const static int _frac_bits = 8;
};

#endif

