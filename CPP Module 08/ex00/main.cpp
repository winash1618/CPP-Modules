/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:12:43 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:56:25 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// int main(void)
// {
// 	int myints[] = {10, 20, 30, 40};
// 	std::vector<int> myvector (myints, myints + 4);
// 	try
// 	{
// 		easyFind(myvector, 60);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
	
// }

// list::push_front
// #include <iostream>
// #include <list>

// int main ()
// {
//   std::list<int> mylist (2,100);         // two ints with a value of 100
//   mylist.push_front (200);
//   mylist.push_front (300);

//   std::cout << "mylist contains:";
//   for (std::list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
//     std::cout << ' ' << *it;

//   std::cout << '\n';

// 	try
// 	{
// 		easyFind(mylist, 800);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
//   return 0;
// }

#include <iostream>
#include <deque>

// int main ()
// {
//   std::deque<int> mydeque;

//   for (int i=1; i<=5; i++) mydeque.push_back(i);

//   std::cout << "mydeque contains:";

//   std::deque<int>::iterator it = mydeque.begin();

//   while (it != mydeque.end())
//     std::cout << ' ' << *it++;
// 	try
// 	{
// 		easyFind(mydeque, 800);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
//   std::cout << '\n';

//   return 0;
// }