
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(std::string name) : type(name) {
	std::cout << "WrongAnimal name constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &data) : type(data.type) {
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &data) {
	if (this != &data)
		this->type = data.type;
	std::cout << "WrongAnimal operator overload called\n";
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal generic sound!\n";
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}