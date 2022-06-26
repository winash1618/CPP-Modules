#include <iostream>

// int max( int x, int y){
// 	return (x>=y? x : y);
// }

// instead of above int type we use global type T
// Since T is not build in type this won't compile in c
// but in c++ we have a way to deal with it 
// Inorder to tell the compiler its a function template we must add a template <typename T>
// It's allmost like declaring variables before using them.
// 
// template< typename T >
// T max(T  x, T  y){ 
// 	return (x >= y ? x : y);
// }
// The above template syntax is Ok if we are using int or float.
// If it is a class the idea of passing by copy is bad idea 
// Since it consumes lot of memory we are not going to use this when x is a class.
// When x is a class we are going to pass by reference as shown below.
// Since we are not going to copy the class every time, the pass by reference will save a lot of memory.
// template< typename T >
// T max(T & x, T & y)
// { 
// 	return (x >= y ? x : y);
// }
// Since our max function won't change x and y it will be possible to save it as const.
// The more we use const the better.
// template< typename T >
// T max(T const & x, T const & y)
// { 
// 	return (x >= y ? x : y);
// }
// Since we have reference to a const instance as parameter we can return the same thing as shown below.
template< typename T > // Template definition
T const & max(T const & x, T const & y)
{ 
	return (x >= y ? x : y);
}

int foo(int x) {
	std::cout << "Long computing time" << std::endl;
	return x;
}

int main( void ) {
	int a = 21;
	int b = 42;

	std::cout << "Max of" << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;	// Explicit Instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;		// Implicit Instanciation

	float c = -1.7f;
	float d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>(c, d) << std::endl; // Explicit Instaciation
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;		// Implicit Instaciation

	char e = 'a';
	char f = 'z';

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char>(e, f) << std::endl; //Explicit instaciation
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e,f) << std::endl;			// Implicit instaciation

	// My problem here
	int ret = max<int>(foo(a), foo(b)); // Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;

	return 0;
}




