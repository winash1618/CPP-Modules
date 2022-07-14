#include <iostream>
#include <iomanip>

template < typename T, typename U>
class Pair {
	public:
		Pair< T,U >( T const & lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs )
		{
			std::cout << "Generic template" << std::endl;
			return;
		}

		~Pair< T, U >( void ) { }

		T const & fst( void ) const { return this->_lhs; }
		U const & snd( void ) const { return this->_rhs; }

		private: 
			T const & _lhs;
			U const & _rhs;
			
			Pair< T, U >( void );
};

// ******************************************************************************************
// partial specialization - Here first parameter is int.
template < typename U >
class Pair<int, U > {
	public:
		Pair< int, U >( int lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs ) {
			std::cout << "INt partial specialization" << std::endl;
			return;
		}

		~Pair< int, U >( void ) { }

		int		fst( void ) const { return this->_lhs; }
		U const & snd( void ) const { return this->_rhs; }
	private:
		int		_lhs;
		U const & _rhs;

		Pair< int, U > ( void );
};

template<>
class Pair< bool, bool >{
	public:
		Pair< bool, bool >(bool lhs, bool rhs) {
			std::cout << "Bool/bool specialization" << std::endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0;
			this->_n |= static_cast<int>(rhs) << 1;
			return ;
		}

		~Pair< bool, bool >( void ) { }
		bool fst( void ) const { return ( this->_n & 0x01 );}
		bool snd( void ) const { return ( this->_n & 0x02 );}
	private:
		bool _n;
};

template< typename T, typename U >
std::ostream & operator<<(std::ostream & o, Pair< T, U > const & P) {
	o << "Pair( " << P.fst() << ", " << P.snd() << " )";
	return o;
}
std::ostream & operator<<(std::ostream & o, Pair< bool, bool > const & p)
{
	o << std::boolalpha << "Pair( " << p.fst() << ", " << p.snd() << " )";
	return o;
}



// https://stackoverflow.com/questions/1282914/pass-pointer-to-template-function-as-function-argument
// https://stackoverflow.com/questions/1174169/function-passed-as-template-argument