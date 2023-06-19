
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap {
	private:
		std::string	_name;
		short		_hitPoints;
		short		_energyPoints;
		short		_damage;

	public:
		void	attack(const std::string &target);
		void	takeDamage(unsiged int amount);
		void	beRepaired(unsigned int amount);
};

#endif