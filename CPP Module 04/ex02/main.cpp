/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:46:19 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/06/22 18:11:42 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

// int main()
// {
// 	const Animal* Anim[30];
// 	for (int i = 0; i < 15; i++)
// 		Anim[i] = new Dog();
// 	for (int j = 15; j < 30; j++)
// 		Anim[j] = new Cat();
// 	for (int i = 0; i < 30; i++)
// 		delete Anim[i];
// 	return (0);
// }

int main()
{
	const AAnimal* k = new AAnimal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}