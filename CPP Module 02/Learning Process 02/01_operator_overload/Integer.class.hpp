#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class Integer {

	public:
		Integer( int const n );
		~Integer( void );

		int getValue( void ) const; // getvalue function returns the value of private member _n inside class.
		// Below we have two operator overload assignment operator and addition oprator.
		Integer  & operator=( Integer const & rhs ); // Here we have a special keyword called operator.
		// Then we put the operator between the operator keyword and opening bracket of the parameters.
		// the number of parameters we give in the function depends on the binarity or unarity of the operator.
		// We know that assignment operator is binary by definition which means on the left we will have the item we are assigned to and  on the right item we want to assign.
		// since the assignment is taking on the left hand side instance of the class which is hidden we cannot refer this as constant.
		Integer    operator+( Integer const & rhs ) const;
		// similarly the addition operator is binary ie we have operand on the left and and operand on the right.
		// since there is hidden parameter present in the member function we consider it as our left hand side.
		// the right hand side of our binary operation is given as rhs. 
		// since there is no change to the left hand side instance or right hand side instance the function can be declared as constant.
	private:
		int _n;
};

std::ostream & operator<< ( std::ostream & o, Integer const & rhs);

#endif // **************************** INTEGER_CLASS_H //