/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:57 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/13 18:54:37 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template < typename T >
class Array {
	public:
		Array(void);
		// {
			// T *a = new[] T;
		//  }
		Array(unsigned int n);
		// {
		// 	 T * a = new T[n];
		//  }
		Array(Array const & src);
		// {
		// 	*this = src;
		// }
		Array & operator=(Array const & rhs);
		// {
		// 	if (this != &rhs)
				
		// 	return *this;
		// }
		~Array(void);
		// { }
	private:
		unsigned int _size;
		T *_a;
		
};
#endif