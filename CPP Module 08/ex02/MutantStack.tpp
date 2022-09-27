/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:55:21 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/27 07:19:55 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
MutantStack<T>::MutantStack(void) {}
template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src)
{
	*this = src;
}
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &rhs)
{
	if (this != &rhs)
	{
		this->c = rhs.c;
	}
	return *this;
}
template <typename T>
MutantStack<T>::~MutantStack(void) {}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{return this->c.begin();}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{return this->c.end();}

#endif