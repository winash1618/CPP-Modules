#include <iostream>
#include <string>

// In this program we will explain how to pass references as function parameters.
// Here we have four functions that will manipulates the string.
// Which either uses constant string pointer or reference on constant string.

void byPtr(std::string* str)
{
	*str += " and ponies";
}

void byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void byRef(std::string& str)
{
	str += " and ponies";
}

void byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}


// Inside int main first i will have a string saying "i like butterflies"
// then we will output this.
// then we will call byPtr function which will add " and ponies" to the string str.
// then we will call byConstPtr which will just output the string.
// then we will change the str to "i like otters"
// then we will print it.
// then we will call byRef function which will take parameter as reference on the string instead of string pointer.
// the function will add " and ponies" to the string.
// then we will call byConstRef function which will take parameter as reference on the string.
// which will just output the string.
int main()
{
	std::string str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}