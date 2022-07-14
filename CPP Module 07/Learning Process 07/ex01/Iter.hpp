/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:55:18 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/13 15:36:01 by mkaruvan         ###   ########.fr       */
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

template< typename T, typename U, typename V>
void iter(T *x, U y, V z)
{
	int temp;

	temp = 0;
	while (temp < y)
	{
		z(&x[temp]);
		temp++;
	}
}
#endif