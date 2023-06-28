
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()  : _name("Bot"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
/*	this->_name = "Bot";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;*/
	std::cout << "Default Class constructor called >> " << this->_name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Class destructor called >> " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
/*	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;*/
	std::cout << "Name constructor called >> " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &data) : _name(data._name), _hitPoints(data._hitPoints), _energyPoints(data._energyPoints), _attackDamage(data._attackDamage) {
	/*this->_name = data._name;
	this->_hitPoints = data._hitPoints;
	this->_energyPoints = data._energyPoints;
	this->_attackDamage = data._attackDamage;*/
	std::cout << "Copy constructor called >> " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &data) {
	if (this != &data) {
		this->_name = data._name;
		this->_hitPoints = data._hitPoints;
		this->_energyPoints = data._energyPoints;
		this->_attackDamage = data._attackDamage;
	}
	std::cout << "Operator overload called >> " << this->_name << std::endl;
	return (*this);
}

bool	ClapTrap::canDoAct() {
	if  (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead, cannot attack!\n";
		return (false);
	}
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " don't have enough energy points to attack!\n";
		return (false);
	}
	return (true);
}

void	ClapTrap::attack(const std::string &target) {
	if (canDoAct()) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead stop!\n";
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " took damage of " << amount << " hit Points!\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (canDoAct()) {
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself and healed " << amount << " hit points back!\n";
	}
}