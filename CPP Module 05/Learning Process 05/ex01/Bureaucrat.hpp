/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:24:35 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/24 09:42:27 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include "Form.hpp"

class Bureaucrat : public Form
{
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string, int);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & rhs);
		~Bureaucrat(void);
		std::string getName( void );
		int getGrade( void );
		void grade_increment( void );
		void grade_decrement( void );
		void signForm(void);
	private:
		std::string const _name;
		int _grade;
};
std::ostream & operator<< ( std::ostream & o, Bureaucrat const & rhs);
#endif
