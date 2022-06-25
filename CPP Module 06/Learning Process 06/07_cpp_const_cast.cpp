int main( void )
{
	int a = 42;							// Reference value

	int const * b = &a;					// Implicit promotion -> Ok
	// Going from mutable value to unmutable value which is at a higher state is allowed.
	// But going from a immutable to mutable which is at a lower state is not allowed.
	// int *c = b;							// Implicit demotion -> Hell no
	// Inorder to do the cast of const type qualifier c++ introduced a new cast called const_cast.
	// Here we are casting our immutable b to mutable int * using const_cast.
	int *d = const_cast<int *>(b);		// Explicit demotion -> Ok , I obey

	return 0;
}