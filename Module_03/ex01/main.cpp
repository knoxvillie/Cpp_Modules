
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	bot1;
	ScavTrap	bot2;
	ScavTrap	chopin("chopin");
	ScavTrap	mozart = ScavTrap("Mozart");

	std::cout << std::endl;

	bot1.attack("Dummy");
	bot1.beRepaired(1);
	bot1.takeDamage(1);
	bot1.takeDamage(5);
	bot1.beRepaired(1);
	bot1.beRepaired(10);
	bot1.beRepaired(1);
	bot1.takeDamage(10);
	bot1.beRepaired(1);
	bot1.beRepaired(10);
	bot1.takeDamage(100);
	bot1.takeDamage(100);

	std::cout << std::endl;
	bot2.attack("Dummy");
	bot2.beRepaired(1);
	bot2.takeDamage(1);
	bot2.takeDamage(5);
	bot2.beRepaired(1);
	bot2.beRepaired(10);
	bot2.beRepaired(1);
	bot2.takeDamage(10);
	bot2.beRepaired(1);
	bot2.beRepaired(10);
	bot2.takeDamage(100);
	bot2.takeDamage(100);
	bot2.takeDamage(100);

	std::cout << std::endl;
	chopin.attack("Liszt");
	chopin.beRepaired(1);
	chopin.takeDamage(1);
	chopin.takeDamage(5);
	chopin.beRepaired(1);
	chopin.beRepaired(10);
	chopin.beRepaired(1);
	chopin.takeDamage(10);
	chopin.beRepaired(1);
	chopin.beRepaired(10);

	std::cout << std::endl;
	mozart.attack("Salieri");
	mozart.beRepaired(1);
	mozart.takeDamage(1);
	mozart.takeDamage(5);
	mozart.beRepaired(1);
	mozart.beRepaired(10);
	mozart.beRepaired(1);
	mozart.takeDamage(10);
	mozart.beRepaired(1);
	mozart.beRepaired(10);
	std::cout << std::endl;
}