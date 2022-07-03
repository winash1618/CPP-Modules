/*
# Namespace 
- Namespace allow us to group together symbols and functions.
*/

#include <stdio.h>

int gl_var = 1;
int f( void ){ return 2;}

namespace	Foo
{
	int gl_var = 3;
	int f( void ) { return 4;}
}
// Everything that we put between this curly braces belongs to the namespace Foo.

namespace Bar
{
	int gl_var = 5;
	int f( void ) { return 6; }
}

namespace Muf = Bar; //namespace aliasing 


// ::(double colon) is called Scope resolution operator in C++
int main(void)
{
	printf("gl_var:          [%d]\n", gl_var);
	printf("f():             [%d]\n\n", f());
	
	printf("Foo::gl_var:     [%d]\n", Foo::gl_var);
	printf("Foo::f():        [%d]\n\n", Foo::f());
	
	printf("Bar::gl_var:     [%d]\n", Bar::gl_var);
	printf("Bar::f():        [%d]\n\n", Bar::f());
	
	printf("Muf::gl_var:     [%d]\n", Muf::gl_var);
	printf("Muf::f():        [%d]\n\n", Muf::f());

	printf("::gl_var:     [%d]\n", ::gl_var); // ::gl_var same as gl_var
	printf("::f():        [%d]\n\n", ::f()); // ::f() same as f()

	return (0);
}