
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		obj;

	if (argc != 2) {
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	std::string	str = argv[1];
	obj.filter(str);
	return (0);
}
