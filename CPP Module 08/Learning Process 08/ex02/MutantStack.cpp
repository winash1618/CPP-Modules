/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:19:25 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/30 18:05:04 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void)
{
	
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src)
{
	*this = src;
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{

}