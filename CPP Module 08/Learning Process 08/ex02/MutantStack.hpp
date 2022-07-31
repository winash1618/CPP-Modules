/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:09:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/30 18:08:45 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <algorithm>
# include <array>
# include <deque>
# include <forward_list>
# include <list>
# include <map>
# include <queue>
# include <set>
# include <stack>
# include <vector>

template<typename T>
class MutantStack : public <T> std::stack
{
	MutantStack<T>(void);
	MutantStack<T>(MutantStack<T> const &);
	MutantStack &operator=(MutantStack const &);
	~MutantStack(void);
};
#endif