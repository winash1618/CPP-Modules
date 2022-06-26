#include <iostream>
// Here we have a class template with typename T which i can use instead of actual type in my class
// Remember in C we need a function creating another one deleting another one adding an element.
// Here in c++ using my template i will be able to write a constructor taking reference on a constant item which we will refer it to as content from which we will be able to create our list.
// Remember in c we had a structure containig the content and if it is a generic version we also have size and next pointer.
// It's no longer the case here when our template was instantiated the T type is replaced with actual type whether it's int or float or char or the most complex class you can imagine. From there this T will become exactly what we need
template < typename T >
class List {
	public:
		List<T>(T const & content) {
			// Etc...
		}

		List<T>(List<T> const & list) {
			// Etc...
		}
		~List<T>( void ) {
			// Etc
		}

		private:
			T * _content; // Here we are using T * because this list meant to be used for large structures. We could remove this * and work with list if we have just an integer and pass pointer type in parameter as a type variable to instantiate our template. It would work exactly the same way.
			List<T> * _next;
};
// Here what we are trying to do is that i can write my list once and for all and the behavior will be similar no matter what types i used in my list whether they are integers, floats, large structures or strings.+
// The principle here is creating a list, adding an item, recovering an item and destroying the list these feautures are all identical 
// So i can change the type of my content to variable of T type and then the class template will work the same way as the function templates.
// It means that i havn't defined a class here. What we have done is that i have defined a class template so that i will be able to use it instatiate our class.
// Which will then give me classes specialized for integers, strings or large structures or large classes whatever you want. So they will be used the same way as our template function but this time it's a class so there is no reason for syntax of declaration of an instance to change.

int main( void ) {
	// Below we have an instance of list template instantiated for integers and i want to call the constructor to which i am sending the 42 value.
	List< int > a( 42 );// here we have List of integers
	List< float > b( 3.14f );// here we have List of float
	List< List<int> > c(a);// here we have List of List of integers

	return 0;
}

// Now we are going to add second parameter to template.
// template <typename T, typename U>
// in practice while instantiating it will be like List< int, float >