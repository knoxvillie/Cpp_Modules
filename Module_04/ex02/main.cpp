
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::cout << "> Creating animals (derivative, not base)\n\n";
	AAnimal	*i = new Cat();
	AAnimal	*j = new Dog();
	//AAnimal	base;

	std::cout << "\n> Animals individual sounds\n";
	i->makeSound();
	j->makeSound();
	std::cout<< ">> Animals individual types\n";
	i->printType();
	j->printType();

	std::cout << "\n> Destroying animals\n\n";
	delete (i);
	delete (j);
	return (0);
}