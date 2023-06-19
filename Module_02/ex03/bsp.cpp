
#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

Fixed	ft_abs(Fixed val) {
	if (val < 0)
		return (val * -1);
	return (val);
}

bool	checkVertice(Point const a, Point const b, Point const c, Point const p) {
	if ((a.Point::getI() == p.Point::getI()) && (a.Point::getJ() == p.Point::getJ()))
		return (false);
	if ((b.Point::getI() == p.Point::getI()) && (b.Point::getJ() == p.Point::getJ()))
		return (false);
	if ((c.Point::getI() == p.Point::getI()) && (c.Point::getJ() == p.Point::getJ()))
		return (false);
	return (true);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	if (!checkVertice(a, b, c, point)) {
		std::cout << "The point isn't inside the triangle" << std::endl;
		return (false);
	}
	Fixed	area = Fixed(0.5f) * ft_abs((a.getI() * (b.getJ() - c.getJ())) + (b.getI() * (c.getJ() - a.getJ())) + (c.getI() * (a.getJ()) - b.getJ()));
	Fixed	sub1 = Fixed(0.5f) * ft_abs((point.getI() * (b.getJ() - c.getJ()) + (b.getI() * (c.getJ() - point.getJ())) + (c.getI() * (point.getJ() - b.getJ()))));
	Fixed	sub2 = Fixed(0.5f) * ft_abs((a.getI() * (point.getJ() - c.getJ())) + (point.getI() * (c.getJ() - a.getJ())) + (c.getI() * (a.getJ() - point.getJ())));
	Fixed	sub3 = Fixed(0.5f) * ft_abs((a.getI() * (b.getJ() - point.getJ())) + (b.getI() * (point.getJ() - a.getJ())) + (point.getI() * (a.getJ()-b.getJ())));
/*	std::cout << " area: "<< roundf(area.toFloat()) << " sub1: " << sub1 << " sub2: "
	<< sub2 << " sub3: " << sub3 << " sum: " << roundf(sub1.toFloat() + sub2.toFloat() + sub3.toFloat()) << " sum(round): "
	<< roundf(sub1.toFloat()) + roundf(sub2.toFloat()) + roundf(sub3.toFloat()) << std::endl;*/
	if ((roundf(sub1.toFloat()) + roundf(sub2.toFloat()) + roundf(sub3.toFloat())) == roundf(area.toFloat())) {
		std::cout << "The point is inside the triangle" << std::endl;
		return (true);
	}
	std::cout << "The point isn't inside the triangle" << std::endl;
	return (false);
}

/*
s_vector	initVector(Point p1, Point p2) {
	s_vector	vec;

	vec.i = p1.Point::getI() - p2.Point::getI();
	vec.j = p1.Point::getJ() - p2.Point::getJ();
	return (vec);
}

bool	crossProduct(s_vector AB, s_vector AC, s_vector AX) {
	Fixed	AB_AX;
	Fixed	AC_AX;

	AB_AX = (AB.i * AX.j) - (AB.j * AX.i);
	AC_AX = (AC.i * AX.j) - (AC.j * AX.i);
	std::cout << AB_AX << " " << AC_AX << std::endl;
	if ((AB_AX >= 0 && AC_AX >= 0) || (AB_AX <= 0 && AC_AX <= 0)) {
		std::cout << "The point is inside the triangle" << std::endl;
		return (true);
	}
	std::cout << "The point isn't inside the triangle" << std::endl;
	return (false);
}

bool	checkVertice(Point const a, Point const b, Point const c, Point const p) {
	if ((a.Point::getI() == p.Point::getI()) && (a.Point::getJ() == p.Point::getJ()))
		return (false);
	if ((b.Point::getI() == p.Point::getI()) && (b.Point::getJ() == p.Point::getJ()))
		return (false);
	if ((c.Point::getI() == p.Point::getI()) && (c.Point::getJ() == p.Point::getJ()))
		return (false);
	return (true);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	s_vector	AB;
	s_vector	AC;
	s_vector	AX;

	if (!checkVertice(a, b, c, point))
	{
		std::cout << "The point isn't inside the triangle" << std::endl;
		return (false);
	}
	AB = initVector(a, b);
	AC = initVector(a, c);
	AX = initVector(a, point);
	return (crossProduct(AB, AC, AX));
}*/
