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
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
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
