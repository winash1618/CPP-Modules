/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:25:51 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 18:36:29 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void){}

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
	unsigned int size = this->vec.size();
	if (1 + size > this->_max)
		throw std::out_of_range("the number of elements trying to add is more than maximum elements it can contain");
	else
		this->vec.push_back(num);
}

void Span::addNumber(int num, int count)
{
	unsigned int size = this->vec.size();
	if (count + size > this->_max)
		throw std::out_of_range("the number of elements trying to add is more than maximum elements it can contain");
	else
		this->vec.insert(this->vec.begin(), count, num);
}

int Span::shortestSpan(void)
{
	std::sort(this->vec.begin(), this->vec.end());
	std::vector<int>::iterator it = this->vec.begin();
	int min = *(it + 1) - *it;
	for (std::vector<int>::iterator it= this->vec.begin(); it + 1 != this->vec.end(); ++it )
	{
		if (min > *(it + 1) - *it)
		{
			min = *(it + 1) - *it;
		}
	}
	return (min);
}

int Span::longestSpan(void)
{
	int min = *std::min_element(this->vec.begin(), this->vec.end());
	int max = *std::max_element(this->vec.begin(), this->vec.end());
	return (max - min);
}
