#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &data) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point = data.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &data) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point = data.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits(const int raw) {
	this->_fixed_point = raw;
}
