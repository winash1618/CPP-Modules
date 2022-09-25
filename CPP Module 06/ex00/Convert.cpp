/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:08:09 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 08:18:52 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

char Convert::toChar(void) const {
	if (getNum() > 31  && getNum() < 127)
		return static_cast<char>(getNum());
	else
		return static_cast<char>(_val);
}

int Convert::toInt(void) const {
  return static_cast<int>(_val);
}

float Convert::toFloat(void) const {
if (getNum() > 31  && getNum() < 127)
	return static_cast<float>(getNum());
else
  return static_cast<float>(_val);
}

double Convert::toDouble(void) const {
if (getNum() > 31  && getNum() < 127)
	return static_cast<double>(getNum());
else
  return static_cast<double>(_val);
}

bool Convert::getError(void) const {
  return _err;
}

const double& Convert::getValue(void) const {
  return _val;
}
size_t Convert::getNum(void) const {
  return _num;
}

const std::string& Convert::getInput(void) const {
  return _str;
}

Convert& Convert::operator=(const Convert& c) {
  if (this != &c) {
    _err = c.getError();
    *(const_cast<std::string*>(&_str)) = c.getInput();
    *(const_cast<double*>(&_val)) = c.getValue();
  }
return *this;
}

Convert::Convert(void)
  :  _str(""), _err(false), _val(0.0), _num(0) {}

Convert::Convert(const std::string& input)
	: _str(input), _err(false), _val(0.0), _num(0) {
	if (_str.size() == 1 && !std::isdigit(_str[0]))
	{
		_num = _str[0];
		_err = false;
	}
	else {
	try {
	char *ptr = NULL;
	*(const_cast<double*>(&_val)) = std::strtod(_str.c_str(), &ptr);
		if (_val == 0.0 &&
			(_str[0] != '-' &&
				_str[0] != '+' &&
				!std::isdigit(_str[0])))
			throw std::bad_alloc();
		if (*ptr && std::strcmp(ptr, "f"))
			throw std::bad_alloc();
	} catch (std::exception&) {
	_err = true;
	}
	}
}

Convert::Convert(const Convert& c)
  : _str(c.getInput()), _err(false), _val(c.getValue()), _num(0) {}

Convert::~Convert(void) {}

static void printToChar(std::ostream& o, const Convert& c) {
	o << "char: " ;
	if (std::isnan(c.getValue()) || std::isinf(c.getValue())) {
		o << "impossible" << std::endl;
	} else if (std::isprint(c.toChar()) && (c.getValue() > 31 && c.getValue() < 127)) {
			o << "'" << c.toChar() << "'" << std::endl;
	} else if (c.getNum() > 31  && c.getNum() < 127) {
		o << "'" << c.toChar() << "'"  << std::endl;
	} else if ((c.getNum() < 32) || (c.getNum() > 127 && c.getNum() < 256)) {
		o << "Non displayable" << std::endl;
	} else {
		o << "Not possible" << std::endl;
	}
}

static void printToInt(std::ostream& o, const Convert& c) {
	o << "int: ";
	if (std::isnan(c.getValue()) || std::isinf(c.getValue())) {
		o << "impossible" << std::endl;
	} else if (c.getNum()){
		o << c.getNum() << std::endl;
	} else {
		o << c.toInt() << std::endl;
	}
}

static void printToReal(std::ostream& o, const Convert& c) {
	if (c.getNum() > 255) {
		o << "float: " << "impossible" << std::endl;
		o << "double: " << "impossible" << std::endl;
		return;
	} else {
	if (std::isnan(c.getValue()) || std::isinf(c.getValue())) {
		o << "float: " << std::showpos << c.toFloat() << "f" << std::endl;
		o << "double: " << std::showpos << c.toDouble() << std::endl;
		return;
	}
	if (c.toFloat() == static_cast<int64_t>(c.toFloat())) 
	{
		if(c.getNum() < 256 && c.toFloat() != static_cast<int64_t>(c.toFloat()))
		{
			o << "float23: " << std::setprecision(std::numeric_limits<float>::digits10)
			<< c.getNum() << ".0f" << std::endl;
		}else
		o << "float: " << c.toFloat() << ".0f" << std::endl;
	} else {
		
		o << "float: " << std::setprecision(std::numeric_limits<float>::digits10)
			<< c.toFloat() << "f" << std::endl;
	}
	if (c.toDouble() == static_cast<int64_t>(c.toDouble())) {
		if(c.getNum() < 256  && c.toDouble() != static_cast<int64_t>(c.toDouble()))
		{
			o << "double: " << std::setprecision(std::numeric_limits<double>::digits10)
			<< c.getNum()  << ".0" << std::endl;
		} else
		o << "double: " << c.toDouble() << ".0" << std::endl;
	} else {
		o << "double: " << std::setprecision(std::numeric_limits<double>::digits10)
			<< c.toDouble() << std::endl;
	}
	}
}

std::ostream& operator<<(std::ostream& o, const Convert& c) {
	if (c.getError()) {
		o << "Converting Failed (Bad Alloc)" << std::endl;
	return o;
	}
	printToChar(o, c);
	printToInt(o, c);
	printToReal(o, c);
	return o;
}
