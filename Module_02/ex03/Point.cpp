#include "Point.hpp"

Point::Point() : _x(0), _y(0){
//	this->_x = 0;
//	this->_y = 0;
}

Point::~Point() {
//	std::cout << "Destructor called\n";
}

Point::Point(const float i, const float j) : _x(i), _y(j) {
//	this->_x = i;
//	this->_y = j;
}

Point::Point(const Point &data) : _x(data.getI()), _y(data.getJ()) {
//	this->_x = data.getI();
//	this->_y = data.getJ();
}

Point	&Point::operator=(const Point &data) {
	if (this == &data)
		return (*this);
	(Fixed)this->_x = data.getI();
	(Fixed)this->_y = data.getJ();
	return (*this);
}

Fixed	Point::getI(void) const {
	return (this->_x);
}

Fixed	Point::getJ(void) const {
	return (this->_y);
}
