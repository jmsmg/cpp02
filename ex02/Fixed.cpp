#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = num << this->_fractional_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(num * 256);
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / 256);
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_fractional_bits);
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		this->_value = fixed.getRawBits();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed	Fixed::operator+(Fixed &fixed)
{
	Fixed	tmp(this->toFloat() + fixed.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed &fixed) const
{
	Fixed	tmp(this->toFloat() - fixed.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(Fixed &fixed) const
{
	Fixed	tmp(this->toFloat() * fixed.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(Fixed &fixed) const
{
	Fixed	tmp(this->toFloat() / fixed.toFloat());
	return (tmp);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawbits(int const raw)
{
	this->_value = raw;
}