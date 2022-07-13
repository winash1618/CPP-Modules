/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interpret.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:09:55 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/12 16:33:41 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cstdint>
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
