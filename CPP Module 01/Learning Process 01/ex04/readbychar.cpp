#include <iostream>
#include <fstream>

int main()
{
	char ch;

	std::fstream fin("foo.txt", std::fstream::in);
	while (fin >> std::noskipws >> ch) 
	{
		std::cout << ch; // Or whatever
	}
}
