#include <stdexcept>

void test1()
{
	try
	{
		//Do some stuff here
		if (/* there's an error */)
		{
			throw std::exception();
		}
		else
		{
			//Do some more stuff
		}
	}
	catch(const std::exception e)
	{
		//Handle the error here
	}
}

void test2()
{
	//Do some stuff here
	if (/* there's an error */)
	{
		throw std::exception();
	}
	else
	{
		//Do some more stuff
	}
}

void test3()
{
	try
	{
		test2();
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		// Handle error
	}
}

void test4()
{
	class PEBKACException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Problem exists between keyboard and chair");
			}
	};

	try
	{
		test3();
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	catch(PEBKACException & e)
	{
		//Handle other exception that are like std::exception
	}
	
}