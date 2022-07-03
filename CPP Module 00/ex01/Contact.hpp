/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:27:13 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/17 11:27:14 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__

// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //

class Contact 
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_no;

		void set_details(void);
		void set_secret(void);
		void get_details(void);
		void get_secret(void);
	private:
		std::string _secret;
};

#endif /* __CONTACT_H__ */