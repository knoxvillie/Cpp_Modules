
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap name constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &data) : ClapTrap(data) {
	this->_name = data._name;
	this->_hitPoints = data._hitPoints;
	this->_energyPoints = data._energyPoints;
	this->_attackDamage = data._attackDamage;
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &data) {
	if (this != &data) {
		this->_name = data._name;
		this->_hitPoints = data._hitPoints;
		this->_energyPoints = data._energyPoints;
		this->_attackDamage = data._attackDamage;
	}
	std::cout << "FragTrap operator overload called\n";
	return (*this);
}

void	FragTrap::highFiveGuys(void) {
	std::cout << this->_name << " is requesting positive high fives!\n";
}