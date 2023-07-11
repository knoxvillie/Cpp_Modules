
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog() {
	delete (this->_brain);
	std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog &data) : Animal(data) {
	this->type = data.type;
	this->_brain = new Brain(*data._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(const Dog &data) {
	if (this != &data) {
		if (this->_brain)
			delete (this->_brain);
		this->_brain = new Brain(*data._brain);
	}
	std::cout << "Dog operator overload called\n";
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Au au!\n";
}