#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::bar( void ) {
	// Eventhough the function parameter is void 
	// By default c++ will automatically pass a parameter 
	// that will be pointing to the current instance of the 
	// class that you are using.
	std::cout << "Member function bar called" << std::endl;
	return;
}