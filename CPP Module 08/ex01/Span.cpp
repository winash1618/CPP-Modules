/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:25:51 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/26 21:11:59 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):_max(0) {}

Span::Span(unsigned int N){this->_max = N;}

Span::Span(Span const & src){*this = src;}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_max = rhs._max;
		this->vec = rhs.vec;
	}
	return *this;
}

Span::~Span(void){}

void Span::addNumber(int num)
{
	if (this->vec.size() < this->_max)
		this->vec.push_back(num);
	else
		throw std::length_error("reached maximum size");
}

void Span::addNumber(int num, int count)
{
	if (this->vec.size() + count <= this->_max)
		this->vec.insert(this->vec.begin(), count, num);
	else
		throw std::length_error("exeeds maximum size");
}

int Span::shortestSpan(void)
{
	if (vec.size() < 2)
		throw std::length_error("less than two number of elements\n");
	int min = *std::max_element(this->vec.begin(), this->vec.end());
	for (std::vector<int>::iterator it= this->vec.begin(); it + 1 != this->vec.end(); ++it )
	{
		int temp= std::abs(*(it + 1) - *it);
		if (min > temp)
		{
			min = temp;
		}
	}
	return (min);
}

int Span::longestSpan(void)
{
	if (vec.size() < 2)
		throw std::out_of_range("less than two number of elements\n");
	int min = *std::min_element(this->vec.begin(), this->vec.end());
	int max = *std::max_element(this->vec.begin(), this->vec.end());
	return (max - min);
}
