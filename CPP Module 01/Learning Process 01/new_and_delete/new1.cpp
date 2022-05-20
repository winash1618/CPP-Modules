#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;
	
	public:
		Student(std::string login) : _login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
	Student bob = Student("bfubar"); // This allocation takes place on stack. normal way. We allready know this.
	Student* jim = new Student("jfubar"); // This allocation takes place on heap. 
	// This allocation takes place dynamically using malloc brackets and they will call the constructor associated with it.
	// After they will return a pointer to the memory addess of the instance.

	// Do some stuff here

	delete jim; // jim is destroyed. If you use new you need to use delete not free. In c++ free will not work properly. 
	return (0); // bob is destroyed
}