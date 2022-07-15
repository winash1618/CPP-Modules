/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:26:07 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/14 17:29:55 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
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


class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const &);
		Span &operator=(Span const &);
		~Span(void);
		void addNumber(int, int);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		std::vector<int> vec;
	private:
		unsigned int _max;
};

#endif