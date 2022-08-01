/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:09:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/31 07:38:51 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void){}
		MutantStack(MutantStack const &src)
		{
			*this = src;
		}
		MutantStack &operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
			{
				this->c = rhs.c;
			}
			return *this;
		}
		~MutantStack(void){}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
	
};
#endif