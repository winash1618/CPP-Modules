/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:54:58 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:19:07 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog(void);
		void makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif