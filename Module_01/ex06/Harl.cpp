#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout <<  "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	void (Harl::*methods[])(void) = {
			&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (short i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*methods[i])();
	}
}

void	Harl::filter(std::string level)
{
	int			filter_case;
	std::string	lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR", "FINAL"};

	for (filter_case = 0; (lvl[filter_case] != "FINAL" && lvl[filter_case] != level); filter_case++);
	switch (filter_case) {
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 0:
			std::cout << std::endl;
			this->complain("DEBUG");

		case 1:
			std::cout << std::endl;
			this->complain("INFO");

		case 2:
			std::cout << std::endl;
			this->complain("WARNING");

		case 3:
			std::cout << std::endl;
			this->complain("ERROR");
	}
}