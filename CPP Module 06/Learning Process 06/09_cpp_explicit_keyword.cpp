#include <iostream>

class A {};
class B {};

class C {
	public:
		C(A const & _) {return;}
		explicit C( B const & _) {return;}
};

void f(C const & _) {
	return;
}

int main( void ) {
	// when we call our f function with an instance of our A class, as our f function accept as parameter an instance of C class You need to have a way to convert your A class to C class.
	// So the compiler will try to make an implicit conversion for that compiler will look at what he can find in the definition of our C class. 
	// Since we have constructor in C class which will allow us to construct an instance of C from A class then we pass it our f function which will take C as parameter. Everything works fine.
	f( A() );	// Implicit conversion OK 

	// When we call our f for a second time with instance of our B class, So the compiler will try to make an implicit conversion. For that compile will look at what he can find in the definition of our C class.
	// Since we have constructor in C class which will allow us to construct an instance of C from B class explicitly. We cannot use this constructor for our implicit conversion into C from B 
	// That means this conversion will throw a compiler error as given below.
	// f( B() );	// Implicit conversion NOT OK, constructor is explicit
	// To make the above statement work we need to make an instance of C class first from a B instance. Then pass this instance of C as a parameter to the function f.
	return 0;

}