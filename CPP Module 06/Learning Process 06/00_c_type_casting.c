void dump_32bits_integer( int const n );
void dump_64bits_double( double const z);

int main (void)
{
	int a = 42; // Reference value

	double b = a; // implicit conversion cast
	double c = (double)a; // Explicit conversion cast

	double d = a; // Implicit promotion
	int e = d; // Implicit demotion -> compiler does it for us -> this behaviour is hazardous.
	int f = (int) d; // Implicit demotion -> Here you're in charge of conversion

	dump_32bits_integer ( a );

	dump_64bits_double ( b );
	dump_64bits_double ( c );

	dump_64bits_double ( d );
	dump_32bits_integer ( e );
	dump_32bits_integer ( f );

	return (0);
}