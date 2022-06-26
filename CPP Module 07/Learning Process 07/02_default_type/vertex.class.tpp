#include <iostream>
#include <iomanip>

template < typename T = float > // Here you can see the template will be instatiated by float it is the default option if you specify nothing
class Vertex {
	// let's assume that we create our vertex from three parameters. _x, _y and _z which will be of the T type. They will often be floats but they can be anything.
	// They can be even instances of a complex class. It doesn't make much sense in the case of vertex class. Here we are taking three parameters
	// 
	public:
		Vertex( T const & x, T const & y, T const & z) : _x( x ), _y( y ), _z( z ) { } // here we are instatiating our _x, _y and _z attributes which are private. Which will be the vertex of our 3D co-ordinate.
		~Vertex(void) { } // I have a destructor doing nothing since i am not allocating anything.
		// Below i have getter of my x, y and z values. co -ordinate of our vertex we need 
		T const & getX( void ) const  { return this->_x;}
		T const & getY( void ) const  { return this->_y;}
		T const & getZ( void ) const  { return this->_z;}
		// Etc // here i add this etc to show that we can add lot more functions here. or making calculation with our vertex.
	private:
		T const _x;
		T const _y;
		T const _z;

		Vertex( void ); // Here i have created a default constructor of my class. It means that it is impossible to construct the instance of the class without any parameters.
};


template< typename T >
std::ostream & operator << ( std::ostream & o, Vertex< T > const & v)
{
	std::cout.precision( 1 );
	o << std::setiosflags( std::ios::fixed);
	o << "Vertex( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return o;
}