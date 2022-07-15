/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:25:51 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/14 17:32:19 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	
}

Span::Span(unsigned int N)
{
	this->_max = N;
}

Span::Span(Span const & src)
{
	*this = src;
}

Span & Span::operator=(Span const & rhs)
{
	if (this != rhs)
	{
		this->_max = rhs.getMax();
		
	}
	return *this;
}

Span::~Span(void)
{

}

void Span::addNumber(int num, int count)
{
	this->vec.insert(this->vec.begin(), count, num);
}

unsigned int Span::shortestSpan(void)
{
	
}

unsigned int Span::longestSpan(void)
{
	
}
