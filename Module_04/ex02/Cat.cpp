
#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat() {
	delete (this->_brain);
	std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &data) : AAnimal(data) {
	this->type = data.type;
	this->_brain = new Brain(*data._brain);
	std::cout << "Cat copy constructor called\n";
}

Cat	&Cat::operator=(const Cat &data) {
	if (this != &data) {
		if (this->_brain)
			delete (this->_brain);
		this->_brain = new Brain(*data._brain);
	}
	std::cout << "Cat operator overload called\n";
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miau Miau!\n";
}