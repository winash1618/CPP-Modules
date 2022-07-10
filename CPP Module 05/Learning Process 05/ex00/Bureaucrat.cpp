/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:28:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 09:45:45 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default name")
{
	std::cout << "Default Bureaucrat constructor called." << std::endl;
	this->_grade = 110;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called." << std::endl;

	if (grade > 150)
		throw  Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw  Bureaucrat::GradeTooHighException();
	else 
	{
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called. " << std::endl;
}

std::string Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void Bureaucrat::grade_increment( void )
{
	try
	{
		if (this->_grade - 1 < 1)
			throw  Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::grade_decrement( void ) 
{
	try
	{
		if (this->_grade + 1 > 150)
			throw  Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}
