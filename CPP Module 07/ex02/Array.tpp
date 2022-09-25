/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:13:44 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 15:24:06 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(void):_size(0), _a(0)
{
	std::cout << "Default constructor called" <<  std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	try {
		if (n < INT_MAX) {
			this->_size = n;
		} else {
			throw std::bad_alloc();
		}
		this->_a = new T[this->_size];
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what() << std::endl;
		this->_a = 0;
		this->_size = 0;
	}
}

template <typename T>
Array<T>::Array(Array const & src)
{
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const & rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs.getSize();
		this->_a = new T[this->_size];
		unsigned int i = 0;
		while(i < this->_size)
		{
			this->_a[i] = rhs._a[i];
			i++;
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array(void) {
	delete[] this->_a;
}

template <typename T>
T & Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= this->_size)
		throw std::out_of_range("Index given is out of range");
	return this->_a[n];
}

template <typename T>
unsigned int Array<T>::getSize(void) const
{
	return (this->_size);
}

#endif