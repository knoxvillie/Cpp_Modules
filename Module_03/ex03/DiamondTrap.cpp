
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "Default DiamondTrap constructor called\n";
	ClapTrap::_name = "Clap";
	ClapTrap::_name += "_dummy";
	this->_name = "bot";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap name constructor called\n";
	this->_name = name;
	ClapTrap::_name = this->_name + "_dummy";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &data) : ClapTrap(data), ScavTrap(data), FragTrap(data), _name(data._name) {
	//this->_name = data._name;
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &data) {
	if (this != &data) {
		this->_name = data._name;
		this->_hitPoints = data._hitPoints;
		this->_energyPoints = data._energyPoints;
		this->_attackDamage = data._attackDamage;
	}
	std::cout << "DiamondTrap operator overload called\n";
	return (*this);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << this->_name << "  ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::getInfo(void) {
	std::cout << "Name: " << this->_name;
	std::cout << " HP: " << this->_hitPoints;
	std::cout << " EP: " << this->_energyPoints;
	std::cout << " HP: " << this->_attackDamage << std::endl;
}