
#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	//this->type = "Animal";
	std::cout << "Animal default constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

Animal::Animal(std::string name) : type(name) {
	//this->type = name;
	std::cout << "Animal copy constructor called\n";
}

Animal::Animal(const Animal &data) : type(data.getType()) {
	//this->type = data.getType();
	std::cout << "Animal copy constructor called\n";
}

Animal	&Animal::operator=(const Animal &data) {
	std::cout << "Animal operator overload called\n";
	if (this != &data)
		this->type = data.type;
	return (*this);
}

void	Animal::makeSound() const {
	std::cout << "Animal doing some generic sound\n";
}

std::string	Animal::getType() const {
	return (this->type);
}
