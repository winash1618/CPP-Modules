/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:58:47 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/14 18:54:47 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__
#include <iostream>
#include "Harl.hpp"
// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Harl
{
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
		void (Harl::*fptr[4])();
	private:
		void debug( void );
		void error( void );
		void warning( void );
		void info( void );
};

#endif /* __HARL_H__ */