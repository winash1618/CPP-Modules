/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:12:32 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/12 11:16:30 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Convert p;
		p.setStr(av[1]);
		p.printAll();
	}
	{
		Convert p;
		p.setStr("0");
		p.printAll();
	}
	{
		Convert p;
		p.setStr("nan");
		p.printAll();
	}
	{
		Convert p;
		p.setStr("42.0f");
		p.printAll();
	}
	
	return (0);
}