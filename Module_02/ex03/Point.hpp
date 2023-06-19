
#ifndef POINT_HPP
# define POINT_HPP

# include <cmath>
# include "Fixed.hpp"

class Point {

	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point();
		~Point();
		Point(const float a1, const float b1);
		Point(const Point &data);
		Point	&operator=(Point const &data);
		Fixed	getI(void) const;
		Fixed	getJ(void) const;
};


#endif
