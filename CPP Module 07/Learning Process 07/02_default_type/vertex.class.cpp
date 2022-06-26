#include <iostream>
#include "vertex.class.tpp"

int main( void ) {
	Vertex< int > v1( 12, 23, 34); // Here we are instatiating our template with int type
	Vertex<>	v2(12, 23, 34); // Here we are instatiating our template with default float type since we are not specifying anything.

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}