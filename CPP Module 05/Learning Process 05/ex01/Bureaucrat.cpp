/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:28:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/24 10:19:36 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	try
	{
		if (grade > 150)
			throw std::exception();
		else if (grade < 1)
			throw std::exception();
		else 
		{
			// this->_name = name;
			this->_grade = grade;
			std::cout << "BI";
		}
	}
	catch (std::exception& e)
	{
			std::cout << e.what() << "HI" << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << " Bureaucrat Destructor called. " << std::endl;
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
	this->_grade--;
}

void Bureaucrat::grade_decrement( void )
{
	this->_grade++;
}

void Bureaucrat::signForm(void)
{
	if (Form::getSign())
	{
		std::cout << this->getName() << " Signed" << std::endl;
	}
	else
	{
		if (this->getGrade() < Form::getGrade2Sign())
			std::cout << this->getName() << " couldn't sign " << Form::getName() << " because " << Form::GradeTooHighException() << std::endl;
		else if (this->getGrade() > Form::getGrade2Exec())
			std::cout << this->getName() << " couldn't sign " << Form::getName() << " because " << Form::GradeTooLowException() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & i )
{
	o << i.getName() << ", bureaucrat grade" << i.getGrade() << std::endl;
	return o;
}