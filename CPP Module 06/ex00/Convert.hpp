/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:05:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/12 14:31:52 by mkaruvan         ###   ########.fr       */
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
		Convert(void);
		Convert(Convert &);
		Convert & operator=(Convert &);
		~Convert(void);
		void setStr(std::string);
		std::string getStr(void);
		int getInt(void);
		float getFloat(void);
		double getDouble(void);
		char getChar(void);
		void printAll(void);
	private:
		std::string _str;
		void printChar(void);
		void printFloat(void);
		void printDouble(void);
		void printInt(void);
};

#endif
