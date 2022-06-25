#include <iostream>

class Foo
{
	public:
		Foo ( float const v ) : _v( v ) { }
		float getV( void ) { return this->_v;}

		operator float()	{ return this->_v;}
		operator int()		{return static_cast<int>(this->_v);}

	private:
		float _v;
};

int main( void )
{
	Foo a( 420.024f);
	float b = a; // Here we have implicit cast from a foo type to float type.
	// The compiler will go and check if in your definition of your class it can find a cast operation for you float
	// since we have the member function operator float(); we will be able to convert foo type to float type.
	int c = a;
	// since we have the member function operator int(); we will be able to convert foo type to int type.

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}