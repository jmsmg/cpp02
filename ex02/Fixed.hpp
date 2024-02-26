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
		Fixed	operator+(Fixed const &fixed) const;
		Fixed	operator-(Fixed const &fixed) const;
		Fixed	operator*(Fixed const &fixed) const;
		Fixed	operator/(Fixed const &fixed) const;

		bool	operator<(Fixed const &fixed) const;
		bool	operator>(Fixed const &fixed) const;
		bool	operator>=(Fixed const &fixed) const;
		bool	operator<=(Fixed const &fixed) const;
		bool	operator==(Fixed const &fixed) const;
		bool	operator!=(Fixed const &fixed) const;

		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const a, Fixed const b);
		static const Fixed	&max(Fixed const a, Fixed const b);
		static Fixed		&max(Fixed &a, Fixed &b);
		int		getRawBits(void) const;
		void	setRawbits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator << (std::ostream &out, const Fixed &fixed);

#endif
