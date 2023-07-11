
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string	type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal &data);
	WrongAnimal	&operator=(const WrongAnimal &data);
	void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif