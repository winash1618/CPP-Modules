/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:27:05 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/02 16:42:42 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

std::string get_input(void)
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

void Contact::set_details(void)
{
	std::cout << "Enter your first name: " << std::endl;
	this->first_name = get_input();
	std::cout << "Enter your Last name: " << std::endl;
	this->last_name = get_input();
	std::cout << "Enter your Nick name: " << std::endl;
	this->nick_name = get_input();
	std::cout << "Enter your Phone Number: " << std::endl;
	this->phone_no = get_input();
	this->set_secret();
}

void Contact::get_details(void)
{
	std::cout << "#################################################" << std::endl;
	std::cout << "############### CONTACT DETAILS #################" << std::endl;
	std::cout << "#################################################" << std::endl;
	std::cout << std::endl;
	std::cout << "     Full Name: " << this->first_name << " " << this->last_name << std::endl;
	std::cout << "     Nick Name: " << this->nick_name << std::endl;
	std::cout << "  Phone Number: " << this->phone_no << std::endl;
	this->get_secret();
}

void Contact::set_secret(void)
{
	std::cout << "Enter your darkest secret: " << std::endl;
	this->_secret = get_input();
}

void Contact::get_secret(void)
{
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}