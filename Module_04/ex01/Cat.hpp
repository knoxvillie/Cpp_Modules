
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain	*_brain;

	public:
		Cat();
		virtual	~Cat();
		Cat(const Cat &data);
		Cat	&operator=(const Cat &data);
		virtual void	makeSound(void) const;
};

#endif