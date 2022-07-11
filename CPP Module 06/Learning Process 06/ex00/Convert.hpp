/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:05:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/11 14:46:42 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstring>

class Convert
{
	public:
		Convert(std::string);
		std::string getStr(void);
		operator double(void);
		operator float(void);
		operator int(void);
		operator char(void);

	private:
		std::string _str;
};

#endif
