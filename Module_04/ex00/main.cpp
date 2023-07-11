
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	const Animal		*meta = new Animal();
	std::cout << std::endl;
	const Animal		*j = new Dog();
	std::cout << std::endl;
	const Animal		*i = new Cat();
	std::cout << std::endl;
	const WrongAnimal	*WrongMeta = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal	*WrongI = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " does ";
	i->makeSound();
	std::cout << i->getType() << " does ";
	j->makeSound();
	std::cout << meta->getType() << " does ";
	meta->makeSound();

	std::cout << std::endl;
	std::cout << WrongMeta->getType() << " " << std::endl;
	std::cout << WrongI->getType() << " " << std::endl;
	WrongI->makeSound();
	WrongMeta->makeSound();

	std::cout << std::endl;
	delete(meta);
	delete(j);
	delete(i);
	delete (WrongMeta);
	delete (WrongI);
	return (0);
}