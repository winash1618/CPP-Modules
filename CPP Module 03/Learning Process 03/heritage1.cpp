#include <string>

class Cat
{
	private:
		int _numberOfLegs;

	public:
		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		~Cat();

		void run(int distance);
		void scornSomeone(std::string const & target);
};

class Pony
{
	private:
		int _numberOfLegs;

	public:
		Pony():
		Pony(Pony const &);
		Pony & operator=(Pony const &);
		~Pony();

		void run(int distance);
		void doMagic(std::string const & target);
};

// Here in class Pony and Cat there are similar things that is defined 
// both of the classes. This way of defining class is very tedius and 
// we need define this similar attributes or functions again and again
// to overcome this problem we are going to use inheritance.
// Inheritance will allow us to use the parent class public and protected 
// functions and variable in the child.