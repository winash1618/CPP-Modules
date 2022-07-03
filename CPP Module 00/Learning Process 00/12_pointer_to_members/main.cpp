// In cpp we have pointers on members and pointers on member functions.
// In addition to what we have in c.

#include <iostream>
#include "Sample.class.hpp"

int main() {
	Sample instance; // Simple instance of sample on the stack.
	Sample * instancep = &instance; // Here we have a pointer to the address of our new instance and it is called instancep.

	int Sample::*p = NULL; //p is a pointer on a integer member of a Sample class initialized to NULL.
	void (Sample::*f)( void ) const; // pointer on member function  of Sample class.

	p = &Sample::foo;// Assigning foo member to pointer p.

	std::cout << "value of member foo: "  << instance.foo << std::endl;
	instance.*p = 21; // ".*" operator is special operator to access the value foo member.
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	//(*instancep).*p = 4; // same as above
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar; // Assiging bar member function to a pointer

	(instance.*f)(); 
	(instancep->*f)();
	// ((*instancep).*f)(); // same as above

	return (0);
}