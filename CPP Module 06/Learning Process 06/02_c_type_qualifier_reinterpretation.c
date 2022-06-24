int main( void )
{
	int a = 42;							/* Reference value */
	
	int const * b = &a;					/* Implicit type qualifier cast */
	int const * c = (int const *) &a;	/* Explicit type qualifier cast */

	int const * d = &a;					/* Implicit promotion -> Ok */
	int * e = d;						/* Implicit demotion -> Hell no ! */
	// The compiler won't compile above line. 
	int * f = (int *) d;				/* Explicit demotion -> Ok, I obey */
	// The above statement is ok for the compiler.

	// So when ever you want to use const type qualifier value anywhere that is not const type
	// it is better if you convert the const type qualifier explicitely into whatever you want.
	return (0);
}