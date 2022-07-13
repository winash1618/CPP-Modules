/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:47:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/13 10:30:31 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("Not Set"), _grade2Sign(0), _grade2Exec(0)
{
	std::cout << "Default Form constructor called." << std::endl;
	this->_signed = false;
}

Form::Form(std::string name, int grade2Sign, int grade2Exec) : _name(name), _grade2Sign(grade2Sign), _grade2Exec(grade2Exec)
{
	std::cout << "Default Form constructor called." << std::endl;
	this->_signed = false;
	if (grade2Sign < 1 || grade2Exec < 1)
		throw Form::GradeTooHighException();
	else if (grade2Sign > 150 || grade2Exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _grade2Sign(src._grade2Sign), _grade2Exec(src._grade2Exec)
{
	std::cout << "Form Copy constructor called." << std::endl;
	*this = src;
	return;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form Copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string &>(this->_name) = rhs.getName();
		const_cast<int &>(this->_grade2Exec) = rhs.getGrade2Exec();
		const_cast<int &>(this->_grade2Sign) = rhs.getGrade2Sign();
		this->_signed = rhs.getSign();
		
	}
	return *this;
}

Form::~Form(void)
{
	std::cout << "Form Destructor called. " << std::endl;
}

std::string Form::getName( void ) const 
{
	return (this->_name);
}

int Form::getGrade2Sign( void ) const
{
	return (this->_grade2Sign);
}

int Form::getGrade2Exec( void ) const
{
	return (this->_grade2Exec);
}

bool Form::getSign(void) const
{
	return (this->_signed);
}

void Form::beSigned(Bureaucrat& B)
{
	try
	{
		if (B.getGrade() <= this->getGrade2Sign())
			this->_signed = true;
		else
			throw std::out_of_range("Bureaucrat grade is less than grade to sign.");
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Form & i )
{
	o << "Form requirement inorder to get signed by a bureaucrat and sign status given below:" << std::endl;
	o << i.getName() << " have a grade required to execute = " << i.getGrade2Exec() << std::endl;
	o << i.getName() << " have a grade required to sign = " << i.getGrade2Sign() << std::endl;
	o << i.getName() << " sign status = " << i.getSign() << std::endl;
	return o;
}
