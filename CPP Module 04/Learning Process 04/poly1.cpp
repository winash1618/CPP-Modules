#include <string>
#include <iostream>

class Character
{
	public:
		void sayHello(std::string const & target);
};

class Warrior : public Character
{
	public:
		void sayHello(std::string const & target);
};

class Cat
{
	//
};

void Character::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << " !" << std::endl;
};

void Warrior::sayHello(std::string const & target)
{
	std::cout << "Sorry" << target << ", I don't like you !" << std::endl;
}

int main()
{
	//This is OK, obviously, Warrior IS a Warrior
	Warrior* a = new Warrior();

	//This is also OK because Warrior IS a Character
	Character* b = new Warrior();

	//This would NOT be ok because IS NOT a Warrior
	//(Although they ARE related, and Warrior IS-A Character, 
	//the reverse is untrue)
	//Warrior* c = new Character();

	// This would NOT be ok either because Cat IS NOT a Character
	// (They are not even related)
	// Character* d = new Cat();

	a->sayHello("students"); // Since a is a Warrior and it will behave like a warrior.

	b->sayHello("students"); // Since b is a Character and it will behave like a Character.
	// eventhough you are calling warrior the type of b given is a character 
	// so compiler didn't try to understand what it actually is and it will assume what you given as true.
	// It will show character behaviour.

}