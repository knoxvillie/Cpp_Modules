
#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &data) : Animal(data) {
	std::cout << "Cat copy constructor called\n";
	*this = data;
}

Cat	&Cat::operator=(const Cat &data) {
	if (this != &data)
		this->type = data.type;
	std::cout << "Cat operator overload called\n";
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miau Miau!\n";
}