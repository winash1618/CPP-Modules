/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:05:04 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/14 19:09:18 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <cmath>
# include <cstdlib>
# include <limits>
# include <iomanip>
# include <iostream>
# include <sstream>
# include <stdexcept>
# include <string>
# include <cctype>
# include <cstring>

class Convert
{
	public:
		Convert(void);
		Convert(const std::string& input);
		Convert(const Convert& c);
		~Convert(void);
		Convert&							operator=(const Convert& c);
		char								toChar(void) const;
		int									toInt(void) const;
		float								toFloat(void) const;
		double								toDouble(void) const;

		bool								getError(void) const;
		const double&						getValue(void) const;
		const std::string&					getInput(void) const;
		size_t								getNum(void) const;

	private:
		const std::string 					_str;
		bool								_err;
		const double						_val;
		size_t								_num;
};
std::ostream& operator<<(std::ostream& o, const Convert& c);
#endif
