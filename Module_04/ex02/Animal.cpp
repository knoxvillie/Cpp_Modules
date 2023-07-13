
#include "Animal.hpp"

AAnimal::AAnimal() : type("Animal") {
	//this->type = "Animal";
	std::cout << "Animal default constructor called\n";
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called\n";
}

AAnimal::AAnimal(std::string name) : type(name) {
	//this->type = name;
	std::cout << "Animal copy constructor called\n";
}

AAnimal::AAnimal(const AAnimal &data) : type(data.getType()) {
	//this->type = data.getType();
	std::cout << "Animal copy constructor called\n";
}

AAnimal	&AAnimal::operator=(const AAnimal &data) {
	std::cout << "Animal operator overload called\n";
	if (this != &data)
		this->type = data.type;
	return (*this);
}

void	AAnimal::makeSound() const {
	std::cout << "Animal doing some generic sound\n";
}

std::string	AAnimal::getType() const {
	return (this->type);
}

void	AAnimal::printType(void) const {
	std::cout << this->type << std::endl;
}