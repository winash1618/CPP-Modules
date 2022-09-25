/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:34:06 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 09:01:46 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class Base
{
	public:
		virtual ~Base(void){}
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void)
{
	Base *D;

	int i = std::rand() % 3;
	if (i == 0)
		D = new A;
	else if (i == 1)
		D = new B;
	else
		D = new C;
	return (dynamic_cast<Base *>(D));
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
		delete p;
	}
	else if (dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
		delete p;
	}
	else if (dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
		delete p;
	}
}

void identify(Base& p)
{
	try {
			A a = dynamic_cast<A&>(p);
			std::cout << "A" << std::endl;
	}
	catch(std::exception &e)
	{
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "C" << std::endl;
		}
	}
	delete &p;
	
}

#endif