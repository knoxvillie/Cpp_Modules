
#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog &data) : Animal(data) {
	std::cout << "Dog copy constructor called\n";
	*this = data;
}

Dog	&Dog::operator=(const Dog &data) {
	if (this != &data)
		this->type = data.type;
	std::cout << "Dog operator overload called\n";
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Au au!\n";
}