#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:
		float const pi;
		int qd;

		Sample(float const f);
		~Sample(void);
		
		void bar( void ) const; // in c++ the const keyword means you are telling the compiler that this member function won't alter the current instance of the class. 
// this means you won't be have an assignation.
};
#endif