
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:

public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &data);
	WrongCat	&operator=(const WrongCat &data);
	void		makeSound(void) const;
};

#endif