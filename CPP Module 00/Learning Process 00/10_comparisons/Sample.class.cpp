#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( int v ) : _foo( v ) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Sample::getFoo( void ) const {
	return this->_foo;
}

int Sample::compare( Sample * other ) const {
	// This function makes a comparison between the current instance and one passed as a parameter.
	// the function is const since we are not changing anything.
	if ( this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}
