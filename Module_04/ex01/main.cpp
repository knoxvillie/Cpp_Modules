
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::cout << "> Creating basic and tmp with copy constructor\n\n";
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "\n> Destroying basic and tmp dogs\n\n";

	std::cout << "\n > Creating animals\n\n";
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;
	std::cout << "\n> Destroying animals\n\n";

	std::cout << "\n > Creating animals\n\n";
	Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << "\n> Destroying animals\n\n";

	std::cout << "\n > Creating cats\n\n";
	Cat *cat = new Cat();
	delete (cat);
	std::cout << "\n > Destroying cats\n\n";
	return (0);

}