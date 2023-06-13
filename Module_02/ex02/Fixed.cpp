#include "Fixed.hpp"

Fixed::Fixed() : _val(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &data) {
	std::cout << "Copy constructor called\n";
	this->_val = data.getRawBits();
}

Fixed::Fixed(const int num) {
	this->_val = num * (1 << _bits);
}

Fixed::Fixed(const float num) {
	this->_val = num * (1 << _bits);
}

Fixed	&Fixed::operator=(const Fixed &data) {
	std::cout << "Copy assigment operator called\n";
	this->_val = data.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (this->_val);
}

void	Fixed::setRawBits(const int raw) {
	this->_val = raw;
}

int		Fixed::toInt(void) const {
	return (this->_val / (1 << _bits));
}

float	Fixed::toFloat(void) const {
	return ((float)this->_val / (float)(1 << _bits));
}

std::ostream &operator<<( std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}

/* Operator Methods */
bool	Fixed::operator>(const Fixed &data) {
	return (this->_val > data.getRawBits());
}

bool	Fixed::operator>=(const Fixed &data) {
	return (this->_val >= data.getRawBits());
}

bool	Fixed::operator<(const Fixed &data) {
	return (this->_val < data.getRawBits());
}

bool	Fixed::operator<=(const Fixed &data) {
	return (this->_val <= data.getRawBits());
}

bool	Fixed::operator==(const Fixed &data) {
	return (this->_val == data.getRawBits());
}

bool	Fixed::operator!=(const Fixed &data) {
	return (this->_val != data.getRawBits());
}

//--------------------

Fixed	Fixed::operator+(const Fixed &data) {
	return (this->toFloat() + data.toFloat());
}

Fixed	Fixed::operator-(const Fixed &data) {
	return (this->toFloat() - data.toFloat());
}

Fixed	Fixed::operator*(const Fixed &data) {
	return (this->toFloat() * data.toFloat());
}

Fixed	Fixed::operator/(const Fixed &data) {
	return (this->toFloat() / data.toFloat());
}

Fixed	&Fixed::operator++(void) {
	this->_val += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp;
}