/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:46:19 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/08/24 14:26:03 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// const WrongAnimal* k = new WrongCat();
	// const WrongCat* l = new WrongCat();

	Cat c = Cat();
	Cat d = Cat();
	d = d;
	// std::cout << meta->getType() << " : ";
	// meta->makeSound();
	// std::cout << i->getType() << " : ";
	// i->makeSound(); //will output the cat sound!
	// std::cout << j->getType() << " : ";
	// j->makeSound();
	// std::cout << k->getType() << " : ";
	// k->makeSound();
	// std::cout << l->getType() << " : ";
	// l->makeSound();
	// Animal animal;
	// Dog dogClass;
	// Cat catClass;
	// Animal &dog = dogClass, &cat = catClass;

	// std::cout << animal.getType() << ": ";
	// animal.makeSound();
	// std::cout << dog.getType() << ": ";
	// dog.makeSound();
	// std::cout << cat.getType() << ": ";
	// cat.makeSound();
	// delete meta;
	// delete i;
	// delete k; 
	// delete j;
	return 0;
}