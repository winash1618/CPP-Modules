#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;

	return;
}

int Sample::getNbInst( void ) {
	return Sample::_nbInst;
	// when we are referring to a class attribute inside a function we will use "this->xxxxxxxx"
	// inside the class and "instance_name.xxxxxxx" from outside the class.
	// When we are referring to a non member function or attribute we will directly use
	// "clase_name::xxxxxxxx"
}

int Sample::_nbInst = 0; //initializing the non member attribute. This is the only way to initialize non member static attribute.