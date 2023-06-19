
#include "Fixed.hpp"

int main( void ) {
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << "Original tests" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
	{
		Fixed const	x(5);
		Fixed const	y(2);
		Fixed	var1 = Fixed(31.05f);
		Fixed	var2 = Fixed (73.01f);
		Fixed	varint = Fixed(10);

		std::cout << "\n==========*Arithmetic operators*==========" << std::endl;
		std::cout << "var1 + var2 = " << var1 + var2 << std::endl;
		std::cout << "var1 - var2 = " << var1 - var2 << std::endl;
		std::cout << "var1 * var2 = " << var1 * var2 << std::endl;
		std::cout << "var1 / var2 = " << var1 / var2 << std::endl;
		std::cout << "var1 / zero = " << var1 / Fixed(0) << std::endl;

		std::cout << "\n==========*Logical operators*==========" << std::endl;
		std::cout << "var1 > var2 = " << (var1>var2) << std::endl;
		std::cout << "var1 >= var2 = " << (var1>=var2) << std::endl;
		std::cout << "var1 < var2 = " << (var1<var2) << std::endl;
		std::cout << "var1 <= var2 = " << (var1<=var2) << std::endl;
		std::cout << "var1 == var2 = " << (var1==var2) << std::endl;
		std::cout << "var1 != var2 = " << (var1!=var2) << std::endl;

		std::cout << "\n==========*Increment operators*==========" << std::endl;
		std::cout << "var1++ = " << var1++ << std::endl;
		std::cout << "++var1= " << ++var1 << std::endl;
		std::cout << "var2++ = " << var2++ << std::endl;
		std::cout << "++var2 = " << ++var2 << std::endl;
		std::cout << "var1-- = " << var1-- << std::endl;
		std::cout << "--var1= " << --var1 << std::endl;
		std::cout << "var2-- = " << var2-- << std::endl;
		std::cout << "--var2 = " << --var2 << std::endl;
		std::cout << "varint++ | ++varint = " << varint++ << " | " << ++varint << std::endl;
		std::cout << "varint-- | --varint = " << varint-- << " | " << --varint << std::endl;


		std::cout << "\n==========*Min - Max operators*==========" << std::endl;
		std::cout << Fixed::max(var1, var2) << std::endl;
		std::cout << Fixed::min(var1, var2) << std::endl;
		std::cout << Fixed::max(x, y) << std::endl;
		std::cout << Fixed::min(x, y) << std::endl;
	}
	return 0;
}