// We will now look at the static cast in the context of upcast and downcast.
#include <iostream>

class Parent				{};
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelated				{};
// The class Unrelated is not related to above classes. 
int main (void) {
	Child1 a;				// Reference value

	Parent* b = &a;			// Implicit upcast -> Ok
	Child1* c = b;			// Implicit downcast -> Hell no !
	Child2* d = static_cast<Child2 *>(b);		// Explicit downcast -> Ok, I obey

	Unrelated * e = static_cast<Unrelated *>(&a);	// Explicit conversion -> No!
}