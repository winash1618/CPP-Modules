/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:26:07 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/27 12:50:32 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <deque>
# include <list>
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
		void addNumber(int);
		int shortestSpan(void);
		int longestSpan(void);
		void fillvec(int);
	private:
		std::vector<int> vec;
		unsigned int _max;
};

#endif