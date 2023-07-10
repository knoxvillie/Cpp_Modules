
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	private:

	public:
		Cat();
		~Cat();
		Cat(const Cat &data);
		Cat	&operator=(const Cat &data);
		void	makeSound(void) const;
};

#endif