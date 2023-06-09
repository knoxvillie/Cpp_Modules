#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int					_fixed_point;
		static const int	_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &data);
		Fixed	&operator=(const Fixed &data);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif
