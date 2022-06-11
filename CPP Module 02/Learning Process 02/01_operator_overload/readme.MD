# Operator overload
## Type of notation:
	- prefix notation (+ 1 1) because operator is before operands. It is also called functional notation. + (1, 1)
	- infix notation (1 + 1) because operator is between operands. 
	- postfix notation (1 1 +)
## Type of operators:
	- unary operator
	- binary operator
	- ternary operator
## Hidden parameter:
	- Remember that c++ is lying to you by default it is passing a first parameter on all your member function when you are called an instance of the current class. In integer sample program the operator overload function for binary operation we may think that we only have one parameter for our equal sign or plus sign but in reality we have two. I have the hidden parameter representing the current instance every time. If we take a unary operator like a pre incrementation or post incrementation  we won't be having any visible parameter because we only need one which is already present as an hidden parameter.
## Return type of assignment and addition operator overload:
	- In the case of assignment operator overload the reference is returned. Because the lhs instance is changing everytime when you do assignation.
	- In te case of addition operator overload the copy is returned since nothing is changed either on the lhs or on the rhs. This means we just need the copy of the instance not the reference to the instance.
## Rules to follow in operator overloading
	- The overload must be natural.
	- The overload of your operator must be related to the natural semantics of this operator(if you want to do multiplication and for that if you use addition then it is a wrong way to use operator overload).
	- The third and final rule is just don't do it (This is a common rule you will find everywhere on the internet, means even though operator overloading sounds like a good idea but it probably isn't, the cases where operator overloads are justified are rare. we will one such rare example in the definition of copy classes and there are few examples of arithmetic classes where operator overload makes sense, there is also the overload of brackets used to make instance act like a function This is referred to as functor). It is common that you will make some mistake if you are not familiar with it. So use it is for practice but don't use it every where you see just because it looks nice.
