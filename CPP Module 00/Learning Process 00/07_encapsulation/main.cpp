#include <iostream>
#include "Sample.class.hpp"

int main()
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	// instance._privateFoo = 42;
	// std::cout << "instance _privateFoo: " << instance._privateFoo << std::endl;
	// if you try to change _privateFoo you will get error: '_privateFoo' is a private member of 'Sample'

	instance.publicBar();
	// instance._privateBar();
	// if you try to change _privateBar function you will get error: '_privateBar' is a private member of 'Sample'

}