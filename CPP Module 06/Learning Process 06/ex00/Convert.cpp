/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:08:09 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/11 15:08:54 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string str) : _str(str)
{
	std::cout << "Constructor called" << std::endl;
}

Convert::operator double(void)
{
	return static_cast<double>(std::stod(this->_str));
}

Convert::operator float(void)
{

	if (!this->_str.compare("nan"))
	{
		std::cout << "nanf" << std::endl;
	}
	else if (!this->_str.compare("nanf"))
	{
		std::cout << "nanf" <<std::endl;
	}
	int i = 0;
	int flag = 1;
	while (i < this->_str.length())
	{
		if (!strchr("1234567890f.+-", this->_str[i]))
		{
			std::cout << "Not a number" << std::endl;
			flag = 0;
		}
		if (this->_str[i] == 'f' && i != this->_str.length() - 1)
		{
			std::cout << "Not a number" << std::endl;
			flag = 0;
		}
		if (this->_str[i] == '+' || this->_str[i] == '-')
		{
			if (i != 0)
			{
				std::cout << "Not a number" << std::endl;
				flag = 0;
			}
		}
	}
	if (flag)
	{
		return (static_cast<float>(std::stof(this->_str)));
		std::cout << "f" << std::endl;
	}
	else
		return ;
}

Convert::operator int(void)
{
	return static_cast<int>(std::stoi(this->_str));
}

Convert::operator char(void)
{
	if (_str.length() == 1)
		return this->_str[0];
	else
		return '*';
}

std::string Convert::getStr(void)
{
	return (this->_str);
}

std::ostream & operator<<(std::ostream & o, Form & i )
{
	if (i.)
	return o;
}