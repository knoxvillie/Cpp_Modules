
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {

	protected:
		std::string	type;

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(std::string name);
		AAnimal(const AAnimal &data);
		AAnimal			&operator=(const AAnimal &data);
		virtual void	makeSound(void) const = 0; // Pure virtual function
		std::string		getType(void) const ;
		void			printType(void) const;
};

#endif