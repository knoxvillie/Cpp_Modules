
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat &data) : WrongAnimal(data) {
	std::cout << "WrongCat copy contructor called\n";
	*this = data;
}

WrongCat	&WrongCat::operator=(const WrongCat &data) {
	if (this != &data)
		this->type = data.type;
	std::cout << "WrongCat operator overload called\n";
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat generic sound!\n";
}