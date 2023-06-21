
#include "ScavTrap.hpp"
//#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called >> " << this->_name << std::endl;
	this->_name = "ScavTrap bot";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called >> " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Name constructor called >> " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &data) {
	this->_name = data._name;
	this->_hitPoints = data._hitPoints;
	this->_energyPoints = data._energyPoints;
	this->_attackDamage = data._attackDamage;
	std::cout << "ScavTrap Copy constructor called >> " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &data) {
	if (this != &data) {
		this->_name = data._name;
		this->_hitPoints = data._hitPoints;
		this->_energyPoints = data._energyPoints;
		this->_attackDamage = data._attackDamage;
	}
	std::cout << "ScavTrap operator overload called >> " << this->_name << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (ClapTrap::canDoAct()) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode.\n";
}