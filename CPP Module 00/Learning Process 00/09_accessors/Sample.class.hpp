#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:
		Sample(void);
		~Sample(void);
// getFoo and setFoo are proxy functions this will be interface between users and private members to be sure that values are allways characters.
// this functions are called getters. they are usually prefixed by get and set.
// get are usually set as constants. since there value wont be changed during get operations.
		int getFoo( void ) const;
		void setFoo( int v );
		
	private:
		int _foo;
};

#endif