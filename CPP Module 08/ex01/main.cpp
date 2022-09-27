/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:26:17 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/27 17:00:52 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::vector<int> a;
	a.push_back(5);
	a.push_back(8);
	a.push_back(12);
	a.push_back(32);
	a.push_back(521);
	a.push_back(34);
	Span sa = Span(6);
	sa.fillspan(a.begin(), a.end());
	std::cout << sa.shortestSpan() << std::endl;
	std::cout << sa.longestSpan() << std::endl;
	return (0);
}
// int main()
// {
// 	Span sp = Span(5);
// 	sp.fillvec(5);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }