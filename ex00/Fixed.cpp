#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &Fixed)
{
	this->_width;
	this->_binary;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
	{
		std::cout << "Copy assignment operator called" << std::endl;
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
}

void	Fixed::toInt(void)
{

}