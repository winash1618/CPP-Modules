/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:24:35 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/25 18:47:07 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat & src);
		Bureaucrat & operator=(Bureaucrat & rhs);
		~Bureaucrat(void);
		std::string GradeTooHighException(void);
		std::string GradeTooLowException(void);
		std::string getName( void );
		int getGrade( void );
		void grade_increment( void );
		void grade_decrement( void );
	private:
		std::string const _name;
		int _grade;
};
std::ostream & operator<<( std::ostream & o, Bureaucrat & rhs);
#endif
