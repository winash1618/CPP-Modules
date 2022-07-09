/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:07:53 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/22 18:10:14 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		AAnimal & operator=(AAnimal const & rhs);
		virtual ~AAnimal(void);
		virtual void makeSound( void ) const = 0;
		virtual std::string getType(void) const;
	protected:
		std::string type;
};

#endif