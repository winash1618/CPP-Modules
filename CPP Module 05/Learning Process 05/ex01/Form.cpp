/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:47:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/24 10:17:52 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Default Form constructor called." << std::endl;
}


Form::Form(Form const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	return *this;
}

Form::~Form(void)
{
	std::cout << " Form Destructor called. " << std::endl;
}

const std::string Form::getName( void )
{
	return (this->_name);
}

const int Form::getGrade2Sign( void )
{
	return (this->_grade2Sign);
}

const int Form::getGrade2Exec( void )
{
	return (this->_grade2Exec);
}

bool Form::getSign(void)
{
	return (this->_signed);
}

void Form::beSigned(Bureaucrat* B)
{
	try
	{
		if (B->getGrade() > this->getGrade2Sign())
			this->_signed = 1;
		else
			throw this->GradeTooLowException();
	}
	catch(Form& e)
	{
		std::cerr << e.GradeTooLowException() << '\n';
	}
}

std::string Form::GradeTooHighException(void)
{
	return("Grade too high \n");
}

std::string Form::GradeTooLowException(void);
{
	return("Grade too low \n");
}

std::ostream & operator<<(std::ostream & o, Form & i )
{
	// o << i.signForm();
	// return o;
}