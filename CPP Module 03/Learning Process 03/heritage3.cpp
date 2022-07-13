#include <string>

class Quadruped //Can access name, run() and legs
{
	private:
		std::string name; //Only accessible from an Quadruped object
	protected: // It's a new encapsulation level that will be used. Only to used in inheritance 
	// They are added with public and private keyword. Public means it is accessible from anywhere.
	// Protected means it is only accessible from an instance of the class or an instance of child class.
	// Then private, it is allways accessible from the instance of the class and not from the child class.
		 Leg legs[4];//Accessible from an Quadruped or derived object
	public:
		void run(); //Accessible from wherever
};

class Dog : public Quadruped // Can access run() and legs
{

};

int main() // Can only access run()
{
	return 0;
}