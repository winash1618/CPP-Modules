/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:46:19 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/07/10 09:12:48 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// int main()
// {
// 	srand(time(NULL));
// 	// Dog basic;
// 	// {
// 	// 	Dog tmp = basic;
// 	// }
// 	const Animal* j = new Dog();
// 	delete j;
// 	// Animal animal;
// 	// Dog dogClass;
// 	// Cat catClass;
// 	// Animal &dog = dogClass;
// 	// Animal &cat = catClass;
// 	// Dog dog;
// 	// dog.makeSound();
// 	// dog.getBrainIdeas();
	
// 	// Dog dogCopy(dog);
// 	// dogCopy.makeSound();
// 	// dogCopy.getBrainIdeas();
// 	// srand(time(NULL));
// 	// Cat cat;
// 	// cat.makeSound();
// 	// cat.getBrainIdeas();

// 	// Cat catCopy(cat);
// 	// catCopy.makeSound();
// 	// catCopy.getBrainIdeas();
// 	return (0);
// }

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
return 0;
}