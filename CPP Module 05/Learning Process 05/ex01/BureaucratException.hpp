/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureaucratException.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:06:27 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/23 18:08:35 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATEXCEPTION_H
# define BUREAUCRATEXCEPTION_H

# include <iostream>

class BureaucratException
{
	public:
		virtual const char * what() const throw()
		{
			return ("Invalid Grade");
		}
};
#endif
