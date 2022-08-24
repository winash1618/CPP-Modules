/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:27:45 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/22 09:19:38 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		WrongCat & operator=(WrongCat const & rhs);
		~WrongCat(void);
		void makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif