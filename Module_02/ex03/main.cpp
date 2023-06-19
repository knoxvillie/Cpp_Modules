
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	{ // Point in vertice
		Point const a(0.0f, 0.0f);
		Point const b(5.0f, 0.0f);
		Point const c(2.5f, 5.0f);
		Point const p(0.0f, 0.0f);
		bsp(a, b, c, p);
	}
	{ // Point inside
		Point const a(0.0f, 0.0f);
		Point const b(5.0f, 0.0f);
		Point const c(2.5f, 5.0f);
		Point const p(2.5f, 2.5f);
		bsp(a, b, c, p);
	}
	{ // Point on edge
		Point const a(0.0f, 0.0f);
		Point const b(5.0f, 0.0f);
		Point const c(2.5f, 5.0f);
		Point const p(1.0, 2.0f);
		bsp(a, b, c, p);
	}
	{ // Point outside
		Point const a(0.0f, 0.0f);
		Point const b(5.0f, 0.0f);
		Point const c(2.5f, 5.0f);
		Point const p(5.0, 5.0f);
		bsp(a, b, c, p);
	}
	{ // Point outside
		Point const a(0.0f, 0.0f);
		Point const b(5.0f, 0.0f);
		Point const c(2.5f, 5.0f);
		Point const p(1.0f, 1.1f);
		bsp(a, b, c, p);
	}
	return (0);
}