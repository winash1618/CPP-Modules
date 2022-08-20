/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 19:59:15 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/19 20:50:55 by mkaruvan         ###   ########.fr       */
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

		void set_details(void);
		void set_secret(void);
		void get_details(void);
		void get_secret(void);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nick_name(void);
		std::string get_phone_no(void);
		
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_no;
		std::string _secret;
};

#endif /* __CONTACT_H__ */