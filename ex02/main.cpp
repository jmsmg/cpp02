#include "Fixed.hpp"

int main( void ) {
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "-------------------------------" << std::endl;
	std::cout << "test case 1 comparison operator" << std::endl;

	if (Fixed(1) < Fixed(2))
	{
		std::cout << "operator < ok" << std::endl;
	}
	if (Fixed(2) > Fixed(1))
	{
		std::cout << "operator < ok" << std::endl;
	}
	if (Fixed(1) <= Fixed(1) && Fixed(1) <= Fixed(2))
	{
		std::cout << "operator <= ok" << std::endl;
	}
	return 0;
}
