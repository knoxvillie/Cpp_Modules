
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain	*_brain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &data);
		Dog	&operator=(const Dog &data);
		virtual void	makeSound(void) const;
};

#endif