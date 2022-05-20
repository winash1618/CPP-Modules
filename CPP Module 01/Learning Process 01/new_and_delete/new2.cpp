#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;

	public:
		Student() : _login("ldefault")
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};
// here we have class student which has a constructor that is not taking parameters.
// Then we have a pointer on student named students and we want to allocate array of 42 students.
// For that we use an array format with 42 as its size which will be the number of students that we want to allocate.
// What it will do is create instances of the class Student in 42 contigous memory space. 
// What it will do is it will allocates 42 contigous Student's in memory for us.
// After this it will call the constructors of each one of this students.
// Note: we cannot pass parameter here as in the last case because we are using new array method allocating which will not allow us to pass parameter.
int main()
{
	Student* students = new Student[42];

	// Do some stuff here

	delete [] students; // if you allocates with new array brackets then you need to deallocates with delete [] instance name. 
}

// For reference please feel free to refer cplusplus.com