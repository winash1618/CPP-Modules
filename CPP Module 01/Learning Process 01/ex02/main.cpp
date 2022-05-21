/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:52:53 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/20 07:57:26 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main()
{
	std::string str = "HI THIS BRAIN";
	
	std::string* stringPtr = &str;
	std::string& stringRef = str;
	std::cout << &str << " " << stringPtr << " " << &stringRef << std::endl;
	std::cout << str << " " << *stringPtr << " " << stringRef << std::endl;
	return (0);
}