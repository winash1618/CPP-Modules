/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:28:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/25 18:47:57 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	try
	{
		if (grade > 150)
			throw  Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw  Bureaucrat::GradeTooHighException();
		else 
		{
			this->_name = name;
			this->_grade = grade;
		}
	}
	catch (std::string & e)
	{
			std::cout << e << std::endl;
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
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called. " << std::endl;
}

std::string Bureaucrat::getName( void )
{
	return (this->_name);
}

int Bureaucrat::getGrade( void )
{
	return (this->_grade);
}

void Bureaucrat::grade_increment( void )
{
	try
	{
		this->_grade--;
		if (this->_grade < 1)
		{
			this->_grade++;
			throw  Bureaucrat::GradeTooHighException();
		}
	}
	catch (std::string & e)
	{
			std::cout << e << std::endl;
	}
}

void Bureaucrat::grade_decrement( void )
{
	try
	{
		this->_grade++;
		if (this->_grade > 150)
		{
			this->_grade--;
			throw  Bureaucrat::GradeTooLowException();
		}
	}
	catch (std::string & e)
	{
			std::cout << e << std::endl;
	}
}

std::string Bureaucrat::GradeTooHighException(void)
{
	return("Grade too high");
}

std::string Bureaucrat::GradeTooLowException(void)
{
	return("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}