/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:51:06 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/05 08:59:11 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

