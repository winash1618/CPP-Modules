/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:27:05 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/20 10:22:14 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

std::string get_input(void)
{
	std::string str;

	do
	{
		if (!getline(std::cin, str))
			exit(0);
	}
	while (str.empty());
	return (str);
}

void Contact::set_details(void)
{
	std::cout << "Enter your first name: " << std::endl;
	this->_first_name = get_input();
	std::cout << "Enter your Last name: " << std::endl;
	this->_last_name = get_input();
	std::cout << "Enter your Nick name: " << std::endl;
	this->_nick_name = get_input();
	std::cout << "Enter your Phone Number: " << std::endl;
	this->_phone_no = get_input();
	this->set_secret();
}

void Contact::get_details(void)
{
	std::cout << "#################################################" << std::endl;
	std::cout << "############### CONTACT DETAILS #################" << std::endl;
	std::cout << "#################################################" << std::endl;
	std::cout << std::endl;
	std::cout << "     Full Name: " << this->_first_name << " " << this->_last_name << std::endl;
	std::cout << "     Nick Name: " << this->_nick_name << std::endl;
	std::cout << "  Phone Number: " << this->_phone_no << std::endl;
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

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string Contact::get_nick_name(void)
{
	return (this->_nick_name);
}

std::string Contact::get_phone_no(void)
{
	return (this->_phone_no);
}