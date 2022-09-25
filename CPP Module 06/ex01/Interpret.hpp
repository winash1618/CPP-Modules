/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interpret.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:09:55 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 08:28:25 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <stdint.h>
struct Data 
{
	std::string name;
	int age;
	float salary;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
