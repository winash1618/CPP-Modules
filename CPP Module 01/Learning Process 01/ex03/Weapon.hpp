/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:05:08 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/11 18:54:15 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <string>
// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string);
		~Weapon(void);
		std::string& getType();
		void setType(std::string);
	private:
		std::string _type;
};

#endif /* __WEAPON_H__ */