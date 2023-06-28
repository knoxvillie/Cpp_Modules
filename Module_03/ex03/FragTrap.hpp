
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	private:

	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &data);
		FragTrap	&operator=(const FragTrap &data);
		void		highFiveGuys(void);
};

#endif