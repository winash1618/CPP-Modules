/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:46:12 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 09:05:20 by mkaruvan         ###   ########.fr       */
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
		virtual ~Animal(void);
		virtual void makeSound( void ) const;
		virtual std::string getType(void) const ;
	protected:
		std::string type;
};

#endif