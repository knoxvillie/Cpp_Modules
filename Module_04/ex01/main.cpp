
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char const **argv)
{
	(void)argc;
	(void)argv;


	Dog basic;
	{
		Dog tmp = basic;
	}


	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;

	Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for (int i = 0; i < 4; i++)
		delete animals[i];


	Cat* cat = new Cat();
	Cat* copy_cat = new Cat(*cat);

	delete ( cat );
	delete ( copy_cat );
	return 0;

}