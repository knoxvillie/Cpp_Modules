
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	private:
		int					_val;
		static const int	_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &data);
		Fixed(const int num);
		Fixed(const float num);
		Fixed	&operator=(const Fixed &data);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		//Comparison:
		bool	operator>(const Fixed &data);
};

std::ostream &operator<<( std::ostream &os, const Fixed &fixed);

#endif