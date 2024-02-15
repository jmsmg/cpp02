#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class	Fixed
{
	private:
		int					_fixed_point;
		static const int	_eight;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator= (const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawbits(int const raw);
};
#endif
