/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:06:22 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/27 14:16:28 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const);
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &);
		~RobotomyRequestForm(void);
		std::string getTarget(void) const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string const _target;
};
std::ostream & operator<< ( std::ostream & o, Form const & rhs);
#endif