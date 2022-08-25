/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:06:30 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/25 10:13:05 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "Form.hpp"

#define ASCII_TREE	\
"     ccee88oo\n\
  C8O8O8Q8PoOb o8oo\n\
 dOB69QO8PdUOpugoO9bD\n\
CgggbU8OU qOp qOdoUOdcb\n\
    6OuU  pf u gcoUodpP\n\
      dfserw  /douUP\n\
        dfsf///\n\
         |||||\n\
         |||||\n\
         |||||\n\
   ......|||||...."

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
		~ShrubberyCreationForm(void);
		std::string getTarget(void) const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string const _target;
		void writeTree(void) const;
};
std::ostream & operator<< ( std::ostream & o, Form const & rhs);
#endif
