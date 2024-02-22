#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class	Fixed
{
	private:
		int					_value;
		static const int	_fractional_bits = 8;

	public:
		Fixed();
		Fixed(int num);
		Fixed(const float num);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed &fixed);
		Fixed	operator+(Fixed &fixed) const;
		Fixed	operator-(Fixed &fixed) const;
		Fixed	operator*(Fixed &fixed) const;
		Fixed	operator/(Fixed &fixed) const;
		int		getRawBits(void) const;
		void	setRawbits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator << (std::ostream &out, const Fixed &fixed);

#endif
