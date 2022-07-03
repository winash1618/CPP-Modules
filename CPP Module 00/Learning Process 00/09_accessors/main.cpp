#include <iostream>
#include "Sample.class.hpp"


/*
# accessors in c++
- getters and setters
- getters and setters are proxy function that stops user from accessing the private attributes directly and to have control over what he do with this values.
- These proxy functions are declared in the public zone.
- There is a naming convention for getters and setters that look like getVar_name(), setVar_name(). It's just a naming convention.
- Normally the get functions are set as constants since it is read only mode and it won't change the content of the class.
*/
int main()
{
	Sample instance;

	instance.setFoo( 42 );
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(-42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	return 0;
}