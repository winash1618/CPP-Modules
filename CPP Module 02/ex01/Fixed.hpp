/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:59:12 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/05 15:39:47 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( int const n );
		Fixed( float const f);
		Fixed( Fixed const & src);
		~Fixed( void );
		Fixed & operator=(Fixed const & rhs);
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