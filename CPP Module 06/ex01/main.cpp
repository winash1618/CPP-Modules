/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:10:03 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 09:03:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interpret.hpp"

int main()
{
	struct Data A;
	A.name = "Muhammed";
	A.age = 28;
	A.salary = 53000;
	
	uintptr_t C = serialize(&A);
	struct Data B = *deserialize(C);
	std::cout << B.name << std::endl;
	std::cout << B.age << std::endl;
	std::cout << B.salary << std::endl;
}