/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:11:36 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/20 09:24:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMANB_H__
#define __HUMANB_H__
#include <string.h>
#include "Weapon.hpp"
// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB(void);
		std::string name;
		
		void attack(void);
};

#endif /* __HUMANB_H__ */