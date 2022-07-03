/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:27:19 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/02 16:43:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string getinput(void)
{
	std::string str;

	do
	{
		if (!getline(std::cin, str))
			_Exit(0);
	}
	while (str.empty());
	return (str);
}

void search_by_name(PhoneBook Book)
{
	std::string str;
	std::cout << "Enter Contact name: " << std::endl;
	str = getinput();
	Book.search_contact(str);
}

void init_book(void)
{
	std::cout << "#################################################" << std::endl;
	std::cout << "################ AWESOME PHONEBOOK ##############" << std::endl;
	std::cout << "#################################################" << std::endl;
	std::cout << std::endl;
	std::cout << "Available options:                " << std::endl;
	std::cout << "     1. ADD                       " << std::endl;
	std::cout << "     2. SEARCH                    " << std::endl;
	std::cout << "     3. EXIT                      " << std::endl;
	std::cout << std::endl;
	std::cout << "Enter the command: ";
}

void phone_book(std::string str, PhoneBook Book, int i)
{
	std::string str1 ("ADD");
	std::string str2 ("SEARCH");
	std::string str3 ("EXIT");
	if (str3.compare(str))
	{
		if (str1.compare(str) == 0)
		{
			Book.Person[i].set_details();
			Book.display_phone_book();
			init_book();
			str = getinput();
			i++;
			if(i == 8)
				i = 0;
			phone_book(str, Book, i);
		}
		else if (str2.compare(str) == 0)
		{
			Book.display_phone_book();
			search_by_name(Book);
			init_book();
			str = getinput();
			phone_book(str, Book, i);
		}
		else
		{
			std::cout << "Wrong Arguement! Try Again: ";
			str = getinput();
			phone_book(str, Book, i);
		}
	}
	else
		return;
}

int main()
{
	PhoneBook Book;
	std::string str;
	
	init_book();
	str = getinput();
	phone_book(str, Book, 0);
}