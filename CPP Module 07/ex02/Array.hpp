/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:57 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 15:16:43 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstdlib>
# include <climits>

template <typename T>
class Array {
	public:
		Array(void);
		Array(unsigned int);
		Array(Array const &);
		Array & operator=(Array const &);
		T & operator[](unsigned int n);
		~Array(void);
		unsigned int getSize(void) const;
	private:
		unsigned int _size;
		T *_a;
};
#include "Array.tpp"
#endif