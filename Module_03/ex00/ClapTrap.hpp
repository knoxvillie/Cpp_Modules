
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap {
	private:
		std::string	_name;
		short		_hitPoints;
		short		_energyPoints;
		short		_attackDamage;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &data);
		ClapTrap		&operator=(const ClapTrap &data);
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		bool		canDoAct(void);
};

bool		canDoAct(void);

#endif