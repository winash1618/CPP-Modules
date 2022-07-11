/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:24:35 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 11:09:58 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string, int);
		Bureaucrat(Bureaucrat &);
		Bureaucrat & operator=(Bureaucrat &);
		~Bureaucrat(void);
		std::string getName( void ) const;
		int getGrade( void ) const;
		void grade_increment( void );
		void grade_decrement( void );
		void signForm( Form &);
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
		const std::string _name;
		int _grade;
};
std::ostream & operator<<( std::ostream & o, Bureaucrat & rhs);
#endif
