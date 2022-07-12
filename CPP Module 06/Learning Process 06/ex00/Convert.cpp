/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:08:09 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/12 13:18:38 by mkaruvan         ###   ########.fr       */
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
	{
		this->_str = rhs.getStr();
		this->_int = rhs.getInt();
		this->_float = rhs.getFloat();
		this->_double = rhs.getDouble();
		this->_char = rhs.getChar();
	}
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

char Convert::getChar(void)
{
	return (this->_char);
}

double Convert::getDouble(void)
{
	return (this->_double);
}

float Convert::getFloat(void)
{
	return (this->_float);
}

int Convert::getInt(void)
{
	return (this->_int);
}


// bool Convert::isChar(void)
// {
// 	if (this->_str.length() == 1)
// 		return (1);
// 	return (0);
// }

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
	// int flag = 1;
	// int flag1 = 0;
	// int i = 0;
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
	// while (i < this->_str.length() && flag == 1)
	// {
	// 	if (!strchr("1234567890f.+-", this->_str[i]))
	// 		flag = 0;
	// 	if (this->_str[i] == 'f' && i != this->_str.length() - 1)
	// 		flag = 0;
	// 	if (this->_str[i] == '+' || this->_str[i] == '-')
	// 		if (i != 0)
	// 			flag = 0;
	// 	if (this->_str[i] == '.')
	// 		flag1++;
	// 	i++;
	// }
	// int flag2 = 0;
	// if (flag1 == 1)
	// {
	// 	i = 0;
	// 	while (i < this->_str.length())
	// 	{
	// 		if (this->_str[i] == '.')
	// 			if (i < 7)
	// 				flag2 = 1;
	// 		i++;
	// 	}
	// }
	// i = 0;

	// // std::cout << flag << std::endl << flag1 << std::endl << flag2 << std::endl;
	// if (flag)
	// {
	// 	if (flag1 == 0 && flag2 == 1)
	// 	{
	// 		std::cout << static_cast<float>(std::stod(this->_str)) << ".0f" << std::endl;
	// 	}
	// 	else
	// 		std::cout << static_cast<float>(std::stod(this->_str)) << "f" << std::endl;
	// }
	// else
	// 	std::cout << "Not a number" << std::endl;
	float f = static_cast<float>(std::stof(this->_str));
	int i = static_cast<int>(std::stol(this->_str));
	f = (float) (f - i);
	if (f == 0)
		std::cout << static_cast<float>(std::stof(this->_str)) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(std::stof(this->_str)) << "f" << std::endl;
}

void Convert::printDouble(void)
{
	// int flag = 1;
	// int flag1 = 0;
	// int i = 0;
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
	// while (i < this->_str.length() && flag == 1)
	// {
	// 	if (!strchr("1234567890f.+-", this->_str[i]))
	// 		flag = 0;
	// 	if (this->_str[i] == 'f' && i != this->_str.length() - 1)
	// 		flag = 0;
	// 	if (this->_str[i] == '+' || this->_str[i] == '-')
	// 		if (i != 0)
	// 			flag = 0;
	// 	if (this->_str[i] == '.')
	// 		flag1++;
	// 	i++;
	// }
	// int flag2 = 0;
	// if (flag1 == 1)
	// {
	// 	i = 0;
	// 	while (i < this->_str.length())
	// 	{
	// 		if (this->_str[i] == '.')
	// 			if (i < 7)
	// 				flag2 = 1;
	// 		i++;
	// 		if (flag2 == 1)
	// 			if(this->_str[i] > '0')
	// 				flag2= 2;
	// 	}
	// }
	// if (flag)
	// {
	// 	if (flag1 == 0 || flag2 != 2)
	// 	{
	// 		std::cout << static_cast<double>(std::stod(this->_str)) << ".0" << std::endl;
	// 	}
	// 	else
	// 		std::cout << static_cast<double>(std::stod(this->_str)) << std::endl;
	// }
	// else
	// 	std::cout << "Not a number" << std::endl;
	double f = static_cast<double>(std::stod(this->_str));
	int i = static_cast<int>(std::stol(this->_str));
	f = (double) (f - i);
	if (f == 0)
		std::cout << static_cast<float>(std::stod(this->_str)) << ".0" << std::endl;
	else
		std::cout << static_cast<float>(std::stod(this->_str)) << std::endl;
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
	while (i < this->_str.length() && flag == 1)
	{
		if (!strchr("1234567890f.+-", this->_str[i]))
			flag = 0;
		if (this->_str[i] == 'f' && i != this->_str.length() - 1)
			flag = 0;
		if (this->_str[i] == '+' || this->_str[i] == '-')
			if (i != 0)
				flag = 0;
		i++;
	}
	if (flag)
		std::cout << static_cast<int>(std::stol(this->_str)) << std::endl;
	else
		std::cout << "Not a number" << std::endl;
}




























































// Convert::Convert(std::string str) : _str(str)
// {
// 	std::cout << "Constructor called" << std::endl;
// }

// Convert::operator double(void)
// {
// 	return static_cast<double>(std::stod(this->_str));
// }

// Convert::(void)
// {

// 	int flag = 1;
// 	if (!this->_str.compare("nan"))
// 	{
// 		std::cout << "nanf" << std::endl;
// 		flag = 0;
// 	}
// 	else if (!this->_str.compare("nanf"))
// 	{
// 		std::cout << "nanf" <<std::endl;
// 		flag = 0;
// 	}
// 	int i = 0;
// 	while (i < this->_str.length() && flag)
// 	{
// 		if (!strchr("1234567890f.+-", this->_str[i]))
// 			flag = 0;
// 		if (this->_str[i] == 'f' && i != this->_str.length() - 1)
// 			flag = 0;
// 		if (this->_str[i] == '+' || this->_str[i] == '-')
// 			if (i != 0)
// 				flag = 0;
// 		i++;
// 	}
// 	if (flag)
// 		return (static_cast<float>(std::stof(this->_str)));
// 	else
// 		std::cout << "Not a number" << std::endl;
// }

// Convert::operator int(void)
// {
// 	return static_cast<int>(std::stoi(this->_str));
// }

// Convert::operator char(void)
// {
// 	if (_str.length() == 1)
// 		return this->_str[0];
// 	else
// 		return '*';
// }

// std::string Convert::getStr(void)
// {
// 	return (this->_str);
// }
