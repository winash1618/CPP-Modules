/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:46:12 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:17:28 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		~Animal(void);
		virtual void makeSound( void ) const;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif