/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:52:00 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/24 07:14:01 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		~Cat(void);
		void makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif