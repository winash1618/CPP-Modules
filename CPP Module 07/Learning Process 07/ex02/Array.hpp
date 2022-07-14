/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:32:57 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/14 11:05:07 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template < typename T >
class Array {
	public:
		Array(void)
		{
			this->_size = 0;
			this->_a = 0;
		}
		Array(unsigned int n)
		{
			this->_size = n;
			this->_a = new T[n];
		}
		Array(Array const & src)
		{
			*this = src;
		}
		Array & operator=(Array const & rhs)
		{
			if (this != &rhs)
			{
				this->_size = rhs.getSize();
				this->_a = new T[this->_size];
				int i = 0;
				while(i < this->_size)
				{
					this->_a[i] = rhs._a[i];
					i++;
				}
			}
			return *this;
		}
		T & operator[](unsigned int n)
		{
			if (n < 0 || n > this->_size)
				throw std::out_of_range("Index given is out of range");
			return this->_a[n];
		}
		~Array(void)
		{
			
		}
		unsigned int getSize(void)
		{
			return (this->_size);
		}
	private:
		unsigned int _size;
		T *_a;
};
#endif