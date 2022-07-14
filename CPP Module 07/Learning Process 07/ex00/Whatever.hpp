/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:46:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/13 13:50:54 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template< typename T >
void swap(T & x, T & y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
	return ;
}

template< typename T >
T const & min(T const & x, T const & y)
{ 
	return (x <= y ? x : y);
}

template< typename T >
T const & max(T const & x, T const & y)
{ 
	return (x >= y ? x : y);
}




#endif