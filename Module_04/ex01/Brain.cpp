
#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "word";
	std::cout << "Brain default constructor called\n";
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain &data) {
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = data.ideas[i];
	std::cout << "Brain copy constructor called\n";
}

Brain	&Brain::operator=(const Brain &data) {
	if (this != &data) {
		for (int i = 0; i < 100 ; i++)
			this->ideas[i] = data.ideas[i];
	}
	return (*this);
}