#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:
		Sample(void);
		~Sample(void);

		static int getNbInst( void ); //non member function
		
	private:
		static int _nbInst; //non member attributes - to count how many instance made from a class level.
		// 
};

#endif