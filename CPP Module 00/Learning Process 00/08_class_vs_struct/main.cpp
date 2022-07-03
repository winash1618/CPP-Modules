#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"
/*
# class vs struct
- Structures and classes work exactly the same way in c++.
- The difference between structure and class in c++ is that the scope of the structure is public by default and scope of class is private by default.
- Everything that you can do with structures in c can be done with class in c++. For this reason we are only going to use classes going forward.
- The advantage of classes is that you have better control over the class attributes and can add member function, a constructor and a destructor.
*/
int main()
{
	Sample1 instance1;
	// Sample2 instance2;

	return 0;
}

// Everything you can do with struct in c can be done with class in c++.

