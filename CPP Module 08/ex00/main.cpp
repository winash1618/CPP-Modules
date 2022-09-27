/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:12:43 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/27 07:38:55 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// int main(void)
// {
// 	int myints[] = {10, 20, 30, 40};
// 	std::vector<int> myvector (myints, myints + 4);
// 	try
// 	{
// 		easyFind(myvector, 30);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
	
// }


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
// 		easyFind(mylist, 200);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
//   return 0;
// }
// #include <iostream>

// int main ()
// {
//   int myints[] = {75,23,65,42,13};
//   std::set<int> myset (myints,myints+5);
//   std::cout << "myset contains:";
//   for (std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
//     std::cout << ' ' << *it;

// 	try
// 	{
// 		easyFind(myset, 75);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
//   return 0;
// }

// #include <iostream>
// #include <deque>

// int main ()
// {
//   std::deque<int> mydeque;

//   for (int i=1; i<=5; i++) mydeque.push_back(i);

//   std::cout << "mydeque contains:";

//   std::deque<int>::iterator it = mydeque.begin();

//   while (it != mydeque.end())
//     std::cout << ' ' << *it++;
//  std::cout << std::endl;
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