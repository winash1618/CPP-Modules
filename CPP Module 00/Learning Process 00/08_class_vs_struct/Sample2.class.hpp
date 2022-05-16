#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

class Sample2
{
		int foo;

		Sample2(void);
		~Sample2(void);

		void bar( void ) const; 
};
#endif

// if you don't mention private or public in the class they will take private by default.