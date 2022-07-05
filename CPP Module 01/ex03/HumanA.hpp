/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:08:05 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/04 08:50:17 by mkaruvan         ###   ########.fr       */
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
		HumanA(std::string, Weapon &);
		~HumanA(void);
		void attack(void);
	private:
		Weapon & _A;
		std::string _name;
};

#endif /* __HUMANA_H__ */