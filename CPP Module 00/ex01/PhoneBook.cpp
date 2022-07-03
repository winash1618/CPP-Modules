/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:27:29 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/17 11:27:32 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void fill(std::string str)
{
	int sp;
	sp = 10 - str.length();
	while(sp)
	{
		std::cout << " ";
		sp--;
	}
	std::cout << str;
}

void check_and_print(std::string str)
{
		if (str.length() <= 10)
			fill(str);
		else
		{
			str[9] = '.';
			int i = -1;
			while (++i < 10)
				std::cout << str[i];
		}
}

void PhoneBook::search_contact(std::string str)
{
	int i = -1;
	while (++i < 8)
	{
		if (str.compare(this->Person[i].first_name) == 0)
		{
			this->Person[i].get_details();
			return;
		}
	}
	std::cout << "Contact Does not exist! Try different name\n" << std::endl;
}

void PhoneBook::display_phone_book(void)
{
	std::cout << "#################################################" << std::endl;
	std::cout << "################ AWESOME PHONEBOOK ##############" << std::endl;
	std::cout << "#################################################" << std::endl;
	std::cout << std::endl;
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	std::cout << "|First Name|Last Name |Nick Name |Phone No. |" << std::endl;
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	int i = -1;
	while (++i < 8)
	{
		std::cout << "|";
		check_and_print(this->Person[i].first_name);
		std::cout << "|";
		check_and_print(this->Person[i].last_name);
		std::cout << "|";
		check_and_print(this->Person[i].nick_name);
		std::cout << "|";
		check_and_print(this->Person[i].phone_no);
		std::cout << "|" << std::endl;
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	}
}
