#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* WrongI = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << WrongMeta->getType() << " " << std::endl;
	std::cout << WrongI->getType() << " " << std::endl;
	WrongI->makeSound(); //will output the Wrongcat sound!
	WrongMeta->makeSound();

	delete(meta);
	delete(j);
	delete(i);
	delete (WrongMeta);
	delete (WrongI);
	return 0;
}