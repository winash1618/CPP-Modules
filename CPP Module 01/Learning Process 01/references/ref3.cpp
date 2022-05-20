#include <iostream>
#include <string>
// In this program we will discuss how to return by reference.


class Student
{
	private:
		std::string _login;
	
	public:
		Student(std::string const & login) : _login(login) // constructor with string const login passed as parameter by reference.
		{

		}

		std::string& getLoginRef() //here we return string as reference
		{
			return this->_login;
		}

		std::string const & getLoginRefConst() const // here we return constant string as reference.
		{
			return this->_login;
		}

		std::string* getLoginPtr() // here we return address of the string starting location
		{
			return &(this->_login);
		}
		
		std::string const * getLoginPtrConst() const // here we return address of the string starting location the return value is considered constant here
		{
			return &(this->_login);
		}
};

int main()
{
	Student bob = Student("bfubar"); // here we have normal instance 
	Student const jim = Student("jfubar"); // here we have constant instance.
	// even though one instance is constant and other is not we can use const function for both of them no issues. but when you want to change the return values you should not const return function. 
	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	// since jim instance is declared constant we cannot change the value jfubar.
	// but we can change the value of login for bob by using either by pointers or by references.
	// below we are changing the return value of bob.getLoginRef() functio which is a reference to the bob login we can change the value bob _login by changing this return value now after changing bob _login will be bobfubar.
	bob.getLoginRef() = "bobfubar"; 
	std::cout << bob.getLoginRefConst() << std::endl; // here you will get output value as bobfubar
	// we can change the value of bob _login value by using pointers like as shown below.
	// Here we are going dereference the return value of bob.getLoginPtr() then change the value associcated with it.
	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl; // here you will get output value as bobbyfubar.
}