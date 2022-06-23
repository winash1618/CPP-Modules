#include <string>
#include <iostream>

class Character
{
	public:
		virtual void sayHello(std::string const & target);
};

class Warrior : public Character
{
	public:
		virtual void sayHello(std::string const & target);
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
	std::cout << "Sorry " << target << ", I don't like you !" << std::endl;
}

int main()
{
	//This is OK, obviously, Warrior IS a Warrior
	Warrior* a = new Warrior();

	//This is also OK because Warrior IS a Character
	Character* b = new Warrior();

	//This would NOT be ok because IS NOT a Warrior
	//(Although they ARE related, and W IS-A C, the reverse is untrue)
	//Warrior* c = new Character();

	// This would NOT be ok either because Cat IS NOT a Character
	// (They are not even related)
	// Character* d = new Cat();

	a->sayHello("students");
	// a is normal since we are calling type warrior with type warrior 
	// here the virtual key won't make any difference.

	b->sayHello("students");
	// b is not normal since we are calling warrior with type character.
	// here the virtual keyword helps to find its original class
}