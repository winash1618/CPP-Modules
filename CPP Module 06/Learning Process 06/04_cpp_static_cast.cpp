int main ( void ) 
{
	int a = 42;						// Reference value

	double b = a;					// Implicit promotion -> OK
	int c = b;						// Implicit demotion -> Hell no
	int d = static_cast<int>(b);	// Explicit demotion -> Ok, I obey
	// The above statement means i want to make static_cast of b variable in double to int type.
	
	return (0);
}
