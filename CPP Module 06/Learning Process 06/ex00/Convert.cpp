/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:08:09 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/13 06:05:04 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
}

Convert::Convert(Convert & src)
{
	*this = src;
}

Convert & Convert::operator=(Convert & rhs)
{
	if (this != &rhs)
		this->_str = rhs.getStr();
	return *this;
}

Convert::~Convert(void)
{
}

std::string Convert::getStr(void)
{
	return (this->_str);
}

void Convert::setStr(std::string str)
{
	this->_str = str;
}

void Convert::printAll(void)
{
	std::cout << "char: ";
	this->printChar();
	std::cout << "int: ";
	this->printInt();
	std::cout << "float: ";
	this->printFloat();
	std::cout << "double: ";
	this->printDouble();
}

void Convert::printChar(void)
{
	int i;
	if (this->getStr().compare("nan") == 0 \
		|| this->getStr().compare("nanf") == 0 \
		|| this->getStr().compare("+nanf") == 0 \
		|| this->getStr().compare("-nanf") == 0 \
		|| this->getStr().compare("+inf") == 0 \
		|| this->getStr().compare("-inf") == 0 \
		|| this->getStr().compare("+inff") == 0 \
		|| this->getStr().compare("-inff") == 0 \
		|| this->getStr().compare("inff") == 0 \
		|| this->getStr().compare("inf") == 0)
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	i = std::stol(this->_str);
	if (i <= 0 ||i > 255)
		std::cout << "Impossible" << std::endl;
	else if (!std::isprint(i))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
}

void Convert::printFloat(void)
{
	int flag = 1;
	int i = 0;
	if (this->getStr().compare("nan") == 0 \
		|| this->getStr().compare("nanf") == 0 \
		|| this->getStr().compare("+nanf") == 0 \
		|| this->getStr().compare("-nanf") == 0 \
		|| this->getStr().compare("+inf") == 0 \
		|| this->getStr().compare("-inf") == 0 \
		|| this->getStr().compare("+inff") == 0 \
		|| this->getStr().compare("-inff") == 0 \
		|| this->getStr().compare("inff") == 0 \
		|| this->getStr().compare("inf") == 0)
	{
		std::cout << static_cast<float>(std::stof(this->_str)) << "f" << std::endl;
		return ;
	}
	while (i < (int)this->_str.length() && flag == 1)
	{
		if (!strchr("1234567890f.+-", this->_str[i]))
			flag = 0;
		if (this->_str[i] == 'f' && i != (int)this->_str.length() - 1)
			flag = 0;
		if (this->_str[i] == '+' || this->_str[i] == '-')
			if (i != 0)
				flag = 0;
		i++;
	}
	i = 0;
	if (flag)
	{
		float f = static_cast<float>(std::stof(this->_str));
		int d = f;
		
		while (d)
		{
			d /= 10;
			i++;
		}
		
		if (i <= 6)
		{
			i = static_cast<int>(std::stol(this->_str));
			f = (float) (f - i);
			if (f == 0)
				std::cout << static_cast<float>(std::stof(this->_str)) << ".0f" << std::endl;
			else
				std::cout << static_cast<float>(std::stof(this->_str)) << "f" << std::endl;
		}
		else
		{
			std::cout << static_cast<float>(std::stof(this->_str)) << std::endl;
		}
	}
	else
	{
		std::cout << "Not a number" << std::endl;
	}
	
}

void Convert::printDouble(void)
{
	int flag = 1;
	int i = 0;
	if (this->getStr().compare("nan") == 0 \
		|| this->getStr().compare("nanf") == 0 \
		|| this->getStr().compare("+nanf") == 0 \
		|| this->getStr().compare("-nanf") == 0 \
		|| this->getStr().compare("+inf") == 0 \
		|| this->getStr().compare("-inf") == 0 \
		|| this->getStr().compare("+inff") == 0 \
		|| this->getStr().compare("-inff") == 0 \
		|| this->getStr().compare("inff") == 0 \
		|| this->getStr().compare("inf") == 0)
	{
		std::cout << static_cast<float>(std::stod(this->_str)) << std::endl;
		return ;
	}
	while (i < (int)this->_str.length() && flag == 1)
	{
		if (!strchr("1234567890f.+-", this->_str[i]))
			flag = 0;
		if (this->_str[i] == 'f' && i != (int)this->_str.length() - 1)
			flag = 0;
		if (this->_str[i] == '+' || this->_str[i] == '-')
			if (i != 0)
				flag = 0;
		i++;
	}
	i = 0;
	if (flag)
	{
		double f = static_cast<double>(std::stod(this->_str));
		int d = f;
		while (d)
		{
			d /= 10;
			i++;
		}
		if (i <= 6)
		{
			
			i = static_cast<int>(std::stol(this->_str));
			f = (double) (f - i);
			if (f == 0)
				std::cout << static_cast<double>(std::stod(this->_str)) << ".0" << std::endl;
			else
				std::cout << static_cast<double>(std::stod(this->_str)) << std::endl;
		}
		else
			std::cout << static_cast<double>(std::stof(this->_str)) << std::endl;
	} 
	else
	{
		std::cout << "Not a number" << std::endl;
	}
}

void Convert::printInt(void)
{
	int flag = 1;
	int i = 0;
	if (this->getStr().compare("nan") == 0 \
		|| this->getStr().compare("nanf") == 0 \
		|| this->getStr().compare("+nanf") == 0 \
		|| this->getStr().compare("-nanf") == 0 \
		|| this->getStr().compare("+inf") == 0 \
		|| this->getStr().compare("-inf") == 0 \
		|| this->getStr().compare("+inff") == 0 \
		|| this->getStr().compare("-inff") == 0 \
		|| this->getStr().compare("inff") == 0 \
		|| this->getStr().compare("inf") == 0)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	while (i < (int)this->_str.length() && flag == 1)
	{
		if (!strchr("1234567890f.+-", this->_str[i]))
			flag = 0;
		if (this->_str[i] == 'f' && i != (int)this->_str.length() - 1)
			flag = 0;
		if (this->_str[i] == '+' || this->_str[i] == '-')
			if (i != 0)
				flag = 0;
		i++;
	}
	if (flag)
	{
		if (std::stol(this->_str)> INT32_MAX || std::stol(this->_str) < INT32_MIN)
			std::cout << "impossible" << std::endl;
		else 
			std::cout << static_cast<int>(std::stol(this->_str)) << std::endl;
	}
	else
		std::cout << "Not a number" << std::endl;
}
