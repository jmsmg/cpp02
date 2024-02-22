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
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed	&operator= (const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawbits(int const raw);
};
#endif
