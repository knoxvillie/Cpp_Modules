
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private:

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &data);
		ScavTrap	&operator=(const ScavTrap &data);
		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif