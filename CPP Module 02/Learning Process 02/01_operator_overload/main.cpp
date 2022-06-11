#include <iostream>
#include "Integer.class.hpp"

int main() {
	// Here we have three instances of the integer class.
	// with construction values 30, 10 and 0
	Integer x( 30 );
	Integer y( 10 );
	Integer z( 0 );
	// Then we just output the value x and y
	// What we have in cout is overload of our << operator.
	// So when we cout x and y we will get the values associated with it. 
	// not something else.
	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	// Next we will call the overload of our assignment operator.
	y = Integer( 12 );
	// After calling the overload of our assignment value we don't the instance so we can destroy it.
	// Next we will call the ostream overload for our << operator and display the value of y by just calling instance y.
	std::cout << "Value of y : " << y << std::endl;
	// Next we will call the ostream overload for our << operator and display the value of z by just calling instance z.
	std::cout << "Value of z : " << z << std::endl;
	// Next we call the addition operator overload then assignment operator overload.
	// the addition operator overload will add instances x and y.
	// then it will construct a instance with 42 as value
	// then the assignation operator overload will be called from 0 to 42.
	// Destructor called to destruct the instance with value 42 since it is no longer needed.
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;
	// Next we will call the ostream overload for our << operator and display the value of z by just calling instance z.
	return (0);
	// When the program ends the Destructor will be called with values 42, 12 and 30.
}