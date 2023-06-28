
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	_name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &data);
		DiamondTrap(std::string name);
		DiamondTrap	&operator=(const DiamondTrap &data);
		void	whoAmI(void);
		void		getInfo(void);
};

#endif