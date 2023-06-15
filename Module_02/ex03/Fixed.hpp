
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
		bool	operator>=(const Fixed &data);
		bool	operator<(const Fixed &data);
		bool	operator<=(const Fixed &data);
		bool	operator==(const Fixed &data);
		bool	operator!=(const Fixed &data);

		Fixed	operator+(const Fixed &data);
		Fixed	operator-(const Fixed &data);
		Fixed	operator*(const Fixed &data);
		Fixed	operator/(const Fixed &data);

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static Fixed	&min(Fixed &var1, Fixed &var2);
		static Fixed const	&min(Fixed const &var1, Fixed const &var2);
		static Fixed	&max(Fixed &var1, Fixed &var2);
		static Fixed const	&max(Fixed const &var1, Fixed const &var2);


};

std::ostream &operator<<( std::ostream &os, const Fixed &fixed);

#endif