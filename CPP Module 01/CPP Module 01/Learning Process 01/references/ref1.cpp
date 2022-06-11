#include <iostream>

int main()
{
	int numberOfBalls = 42; // normal variable
	
	int* ballsPtr = &numberOfBalls; // here we c pointer on numberOfBalls address.
	int& ballsRef = numberOfBalls; // here we use c++ references 
	//int& ballsRef2; // We are not allowed to do this because it will create a reference which is pointing to nothing.
	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	// Here we couting our normal variable numberOfBalls first then we are going to cout
	// ballsPtr pointer which is pointing to the address of numberOfBalls by dereferencing it.
	// For references we use variable type with &. Here we are going to assign variable itself.
	// Not the address of it. What we have is that we have reference that is pointing to variable numberOfBalls.
	// Since we are pointing on to the variable not the address we cannot change the reference as in the case of a pointer.
	// Finally we will output ballsRef which can directly access the value of the variable unlike pointer which requires dereferencing.
	// We can say like ballsRef is like an alias for numberOfBalls.
	*ballsPtr = 21;
	// In the above statement we will dereference our pointer to access our variable numberOfBalls
	// and then will set it to 21;
	std::cout << numberOfBalls << std::endl; // Here we will get 21 as our output.
	ballsRef = 84; // if we want change the value of referenced variable using reference we use it directly.
	std::cout << numberOfBalls << std::endl; // Here we will get 84 as out output.
	
	return (0);
}