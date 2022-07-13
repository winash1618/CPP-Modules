/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:34:06 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/13 06:07:02 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>

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

	int i = rand() % 3;
	if (i == 0)
		D = new A;
	else if (i == 1)
		D = new B;
	else if (i == 2)
		D = new C;
	return (dynamic_cast<Base *>(D));
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A *>(& p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(& p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(& p))
		std::cout << "C" << std::endl;
}

#endif