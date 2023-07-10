
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();
		Animal(std::string name);
		Animal(const Animal &data);
		Animal			&operator=(const Animal &data);
		virtual void	makeSound(void) const;
		std::string		getType(void) const ;
};

#endif