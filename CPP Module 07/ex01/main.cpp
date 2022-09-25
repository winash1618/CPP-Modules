/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:55:31 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/25 12:54:31 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

class Awesome
{
	public:
		Awesome(void) : _n(42) { return;}
		int get(void) const { return this->_n;}
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o;}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter( tab , 5, print);
	iter( tab2 , 5, print);
	
	return 0;
}
