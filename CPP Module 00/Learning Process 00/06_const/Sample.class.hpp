#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:
		float const pi;
		int qd;
	// if you declare a variable as const then you cannot do assignation 
	// to that const variable.
	// means: pi = 23.0f is not allowed.
	// what you can do is declaration and initailization on the same line.
	// float const pi = 23.0f; // this is oK
		Sample(float const f);
		~Sample(void);
		
		void bar( void ) const; 
	// in c++ the const keyword means you are telling the 
	// compiler that this member function won't alter the current instance of the class. 
	// this means you won't be have an assignation.
};
#endif