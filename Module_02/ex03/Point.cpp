#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : i(0), j(0){
//	this->i = 0;
//	this->j = 0;
}

Point::~Point() {
//	std::cout << "Destructor called\n";
}

Point::Point(const float a1, const floar b1) : i(a1), j(b1) {
//	this->i = a1;
//	this->j = b1;
}

Point::Point(const Point &data) : i(data.getI()), j(data.getJ()) {
//	this->i = data.getI();
//	this->j = data.getJ();
}

Point	&Point::operator=(const Point &data) {
	if (this == &data)
		return (*this);
	this->i = data.getI();
	this->j = data.getJ();
	return (*this);
}

bool	Point::operator==(Point &data) {
	if (this->i == data.getI() && this.j == data.getJ())
		return (true);
	return (false);
}

Fixed	getI(void) const {
	return (this->i);
}

Fixed	getJ(void) const {
	return (this->j);
}
