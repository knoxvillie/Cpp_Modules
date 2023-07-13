
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"
# include "string"

class Brain {
protected:
	std::string	ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain &data);
	Brain(std::string name);
	Brain	&operator=(const Brain &data);
};

#endif