/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:55:18 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/14 10:21:15 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template< typename T >
void function(T * a)
{
	*a = *a + 1;
	std::cout << *a << std::endl;
}

template< typename T>
void print (T const & x) { std::cout << x << std::endl; return;}

template< typename T>
void iter(T *x, int y, void (*function) (T const &))
{
	int temp;

	temp = 0;
	while (temp < y)
	{
		function(x[temp]);
		temp++;
	}
}
#endif