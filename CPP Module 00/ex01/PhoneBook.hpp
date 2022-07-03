/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:27:39 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/17 11:27:40 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <string>
#include "Contact.hpp"
// ************************************************************************** //
//                             PhoneBook Class                                //
// ************************************************************************** //

class PhoneBook 
{
	public:
		Contact Person[8];
		void search_contact(std::string);
		void display_phone_book(void);
};



#endif /* __PHONEBOOK_H__ */