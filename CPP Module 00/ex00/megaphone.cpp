/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:27:28 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/02 11:34:03 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	MegaPhone
{
	public:
		void to_upper(char *str);
		void info(void);
};

void MegaPhone::info(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

void MegaPhone::to_upper(char *str)
{
	while (*str)
	{
		*str = toupper(*str);
		std::cout << *str;
		str++;
	}
}

int	main(int ac, char **av)
{
	MegaPhone MyPhone;
	int i = 0;
	if (ac >= 2)
		while (++i < ac)
			MyPhone.to_upper(av[i]);
	else if (ac == 1)
		MyPhone.info();
	std::cout << std::endl;
	return (0);
}
