/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:12:39 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/14 15:03:27 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <array>
# include <deque>
# include <forward_list>
# include <list>
# include <map>
# include <queue>
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
	// std::cout << *x.end() << " "<< y;
	// *find(x.begin(), x.end(), y);
}

#endif