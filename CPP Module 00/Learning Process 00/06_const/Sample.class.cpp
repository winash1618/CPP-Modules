#include <iostream>
#include "Sample.class.hpp"
// here we are not initializing f value to the pi attribute 
// here what we are doing is that we are initializing pi attribute to the f value.
Sample::Sample( float const f) : pi (f), qd (42) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::bar( void ) const {
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
	// this->qd = 0; since you declared the function const you cannot change the value of this->qd.
	return;
}