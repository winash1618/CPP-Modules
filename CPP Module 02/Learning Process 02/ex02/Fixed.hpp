/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:26:30 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/17 14:47:49 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed( void );							//canonical
		Fixed( int const n );
		Fixed( float const f);
		Fixed( Fixed const & src);			//canonical
		~Fixed( void );						//canonical
		Fixed & operator=(Fixed const & rhs);	//canonical

		//-------------- Arithmetic operators --------------------//
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);

		//-------------- Comparison operators --------------------//
		inline bool operator<(Fixed const & rhs);
		inline bool operator>(Fixed const & rhs);
		inline bool operator<=(Fixed const & rhs);
		inline bool operator>=(Fixed const & rhs);
		inline bool operator!=(Fixed const & rhs);
		inline bool operator==(Fixed const & rhs);

		//-------------- Increment/Decrement operators -----------//
		Fixed & operator++( void );// prefix increment
		Fixed operator++( int );// postfix increment
		Fixed& operator--( void );// prefix decrement
		Fixed operator--( int );// postfix decrement

		//------------ min max -----------------------------------//
		// int & Fixed  min(Fixed lhs, Fixed rhs);
		static Fixed & min(const Fixed & lhs, const Fixed & rhs);
		// static Fixed  max(Fixed lhs, Fixed rhs);
		// float & max(Fixed & lhs, Fixed & rhs);

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int _float;
		const static int _frac_bits = 8;
};
std::ostream & operator<< ( std::ostream & o, Fixed const & rhs);
#endif