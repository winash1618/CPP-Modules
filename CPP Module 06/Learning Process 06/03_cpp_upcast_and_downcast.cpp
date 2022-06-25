#include <iostream>

class Parent				{}; // parent class is more generic compared to its childs.
class Child1: public Parent	{};
class Child2: public Parent	{};
// child1 and child2 are more specialized versions of class.
int main ( void )
{
	Child1 a;					/* Reference value */

	Parent * b = &a;			/* Implicit reinterpretation cast */
	// above statement is same as void *b = &a where a is float.
	Parent * c = (Parent *) &a;	/* Explicit reinterpretation cast */

	Parent * d = &a;			/* Implicit upcast -> OK */
	Child1 * e = d;				/* Implicit downcast -> Hell no ! */
	// The above statement will throw an error.
	Child2 * f = (Child2 *) d;	/* Explicit downcast -> Ok but really ? */
	// The above statement is OK for compiler. But this is wrong way of interpreting.
	// since you are trying to interpret child1 as child2. This won't run properly.
	return 0;
}
