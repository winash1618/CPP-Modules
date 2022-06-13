/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:08:05 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/12 10:03:09 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__
#include <string.h>
#include "Weapon.hpp"
// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class HumanA
{
	public:
		HumanA(void);
		HumanA(std::string, Weapon &);
		~HumanA(void);
		Weapon *A;
		std::string name;
		void attack(void);
};

#endif /* __HUMANA_H__ */