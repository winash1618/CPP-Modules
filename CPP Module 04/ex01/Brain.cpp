/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:39:39 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/24 21:13:58 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor called." << std::endl;
	*this = src;
	return;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy assignment operator called." << std::endl;
	if (&rhs == this)
	{
		return (*this);
	}
	(void)rhs;
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called. " << std::endl;
}
