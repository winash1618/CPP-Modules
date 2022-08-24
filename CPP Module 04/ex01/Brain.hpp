/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:39:43 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:37:03 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		~Brain(void);
		std::string ideas[100];
		
};

#endif