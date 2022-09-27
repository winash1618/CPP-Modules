/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:12:39 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/27 07:33:32 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <list>
# include <set>
# include <stack>
# include <vector>

template<typename T>
void easyFind(T x, int y)
{
	if (find(x.begin(), x.end(), y) != x.end())
		std::cout << "Element found in vector x:" << *find(x.begin(), x.end(), y) << std::endl;
	else
		throw std::out_of_range("Element not found");
}

#endif