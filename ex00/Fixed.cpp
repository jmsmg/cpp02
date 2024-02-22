#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_binary = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->_binary = fixed._binary;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
	{
		std::cout << "Assignment operator called" << std::endl;
		this->_binary = fixed.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_binary);
}

void	Fixed::setRawbits(int const raw)
{
	this->_binary = raw;
}