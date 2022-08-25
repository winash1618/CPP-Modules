/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:06:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:43:30 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const);
		PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &);
		~PresidentialPardonForm(void);
		std::string getTarget(void) const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string const _target;
};
std::ostream & operator<< ( std::ostream & o, Form const & rhs);
#endif
