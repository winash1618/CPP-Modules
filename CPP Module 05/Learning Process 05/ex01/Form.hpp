/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:47:41 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/24 10:07:18 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(void);
		Form(Form const & src);
		Form & operator=(Form const & rhs);
		~Form(void);
		const std::string getName( void );
		int const getGrade2Sign( void );
		int const getGrade2Exec( void );
		bool getSign( void );
		std::string GradeTooHighException(void);
		std::string GradeTooLowException(void);
		void beSigned(Bureaucrat*);
	private:
		std::string const _name;
		int const _grade2Sign = 50;
		int const _grade2Exec = 90;
		bool _signed;
		
};
std::ostream & operator<< ( std::ostream & o, Form const & rhs);
#endif
