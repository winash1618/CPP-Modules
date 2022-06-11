# Canonical form of c++: (C++ notation)
## Introduction:
	- This is more of a norm rather than a c++ notion.
	- Canonical form of c++ is also called coplien form of c++.
	- This is just way of building classes.
	- This form is introduced in order to make sure that we have reasonable and identical interface on all of our classes of all of our project. From there anyone who reads your source code will be sure that there are certain number of functions available in all your classes allowing for a uniform process.
## Canonical form requirements (if you have the elements shown below then we can call your class as canonical)
	- Class should at least one default constructor.
	- Class should have at least one copy constructor meaning that the constructor is taking as a parameter an instance of the class you are defining and it make a copy of the class.
	- There is also one equals operator overload allowing to make an assignment from the instance of this class. We can see that the behaviour is close to the behaviour of a copy constructor. In the case of equals assignment operator we only have the update of the current instance, But in the case of copy constructor we create a new instance.
	- The class should have one destructor.