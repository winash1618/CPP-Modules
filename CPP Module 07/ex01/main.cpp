/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:55:31 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/14 09:17:31 by mkaruvan         ###   ########.fr       */
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
// int main(void)
// {
// 	int i[5]= {1, 2 ,3, 4 ,5};
// 	::iter(i, 5, function<int>);
// 	int j = 0;
// 	while (j < 5)
// 	{
// 		std::cout << i[j] << std::endl;
// 		j++;
// 	}
// }
