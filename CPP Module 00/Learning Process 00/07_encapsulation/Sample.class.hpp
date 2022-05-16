#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

// public and private keyword allow us to control the encapsulation of our new classs.
// public functions and attributes will be possible to access from outside of the class as well as inside.
// private function and attributes can only be accessed inside the class not outside of class.
// if you try to access private member from outside you will get an error.

class Sample
{
	public: 
		int publicFoo;

		Sample(void);
		~Sample(void);
		
		void publicBar( void ) const;
// underscore for private is a convention.
	private:
		int _privateFoo;

		void _privateBar( void ) const;
};

#endif