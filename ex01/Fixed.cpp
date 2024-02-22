#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(int num)
{
	_value = num;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float num)
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->_value = fixed._value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
	{
		std::cout << "Assignment operator called" << std::endl;
		this->_value = fixed.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawbits(int const raw)
{
	this->_value = raw;
}