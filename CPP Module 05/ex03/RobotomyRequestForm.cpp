/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:06:19 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/27 14:05:43 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request Form", 72, 45), _target("target")
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm target constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src._target)
{
	std::cout << "RobotomyRequestForm copy Constructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called." << std::endl;
	if (this != &rhs)
		const_cast<std::string &>(this->_target) = rhs.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (executor.getGrade() <= this->getGrade2Exec() && this->getSign())
		{
			std::cout << "Drr....... Drr......." << std::endl;
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		}
		else
		{
			throw std::out_of_range("Robotomy Failed!");
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}