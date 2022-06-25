#include <iostream>
#include <typeinfo>
#include <exception>

class Parent		{
	public:
		virtual ~Parent(void) {} 
};

class Child1: public Parent {};
class Child2: public Parent {};


int main( void ) {
	Child1 a;					// Reference value
	Parent * b = &a;			// Implicit upcast -> Ok

	// Explicit downcast - . Suspens
	Child1 * c = dynamic_cast<Child1 *>(b);
	// At runtime we will see if a dynamic cast returns NULL or not.
	// And we send appropriate messeges here Conversion is OK.
	if ( c == NULL )
	{
		 std::cout << "Conversion is NOT Ok" << std::endl;
	}
	else
	{
		std::cout << "Conversion is Ok" << std::endl;
	}


	// Explicit downcast -> Suspens
	// Here we are try to cast Parent to Child2 reference. 
	// And we put the statement in try catch block to find any error.
	// Here the principle is that i will unreference my parent to able to make a conversion and the types to be coherent.
	//
	try {

		Child2 & d = dynamic_cast<Child2 &>(*b); // &>(*b) this is reference to unreferencing.
		std::cout << "Conversion is Ok" <<std::endl;
	}
	catch( std::bad_cast &bc )
	{ 
		std::cout << "Conversion is NOT OK: " << bc.what() << std::endl;
		return 0;
	}
	return (0);
}

// This program will run smoothly during compilation the problem happens during the run time.