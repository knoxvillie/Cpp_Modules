
#ifndef POINT_HPP
# define POINT_HPP

# include <cmath>

class Point {

	private:
		Fixed const	i;
		Fixed const	j;

	public:
		Point();
		~Point();
		Point(const float a1, const floar b1);
		Point(const Point &data);
		Point	&operator=(Point &data);
		Fixed	getI(void);
		FIxed	getJ(void);
};


#endif
