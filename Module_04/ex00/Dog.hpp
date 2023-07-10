
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

	private:

	public:
		Dog();
		~Dog();
		Dog(const Dog &data);
		Dog	&operator=(const Dog &data);
		void	makeSound(void) const;
};

#endif