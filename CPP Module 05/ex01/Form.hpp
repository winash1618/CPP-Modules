/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:47:41 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:41:44 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(const std::string, const int, const int);
		Form(Form const &);
		Form & operator=(Form const &);
		~Form(void);
		std::string getName(void) const;
		int getGrade2Sign(void) const;
		int getGrade2Exec(void) const;
		bool getSign(void) const;
		void beSigned(Bureaucrat &);
	private:
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		std::string const _name;
		int const _grade2Sign;
		int const _grade2Exec;
		bool _signed;
		
};
std::ostream & operator<<( std::ostream & o, Form & rhs);
#endif
