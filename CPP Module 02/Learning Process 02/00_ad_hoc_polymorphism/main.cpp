#include <iostream>
#include "Sample.class.hpp"

int main()
{
	Sample instance;
	instance.bar('c');
	instance.bar(42);
	instance.bar(10.52f);
	instance.bar(instance);
}