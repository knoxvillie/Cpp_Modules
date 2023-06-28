
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	bot1;
	DiamondTrap	bot2("MASTER_BOT");

	std::cout << std::endl;
	bot1.getInfo();
	bot1.highFiveGuys();
	bot1.guardGate();
	bot1.attack("BIG ENEMY");

	std::cout << std::endl;
	bot2.getInfo();
	bot2.highFiveGuys();
	bot2.guardGate();
	bot2.attack("BIG ENEMY");
	std::cout << std::endl;
	
	return (0);
}