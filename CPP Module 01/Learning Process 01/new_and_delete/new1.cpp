#include <iostream>
#include <string>

/*
# new and delete
- In c we use malloc when you want to allocate memory in c++ also you can do this but it is a very bad idea. Why?  when you want to allocate integer, float, characters no problem it's totally doable, but when you want to allocate objects  based on classes you written or provided by the standard library it will throw an error since it won't call the constructor of your object. similarly if you try to free the object you malloced it won't call destructor at all.
- So inorder to allocate and de allocate objects in c++ we use new and delete which will handle the memory allocation using the malloc brackets.
*/

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
	// if you allocate object with new then you need to delete it otherwise the destructor won't be called.
	delete jim; // jim is destroyed. If you use new you need to use delete not free. In c++ free will not work properly. 
	return (0); // bob is destroyed
}