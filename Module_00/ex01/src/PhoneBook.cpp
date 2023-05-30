#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->index = 0;
}

void	PhoneBook::add() {
	std::cout << "ADD - New Contact:" << std::endl;
	this->_contacts[this->index % 8].set_full_info();
	std::cout << "Success!" << std::endl;
	this->index++;
}

void	PhoneBook::search(void) {
	std::string	input;

	if ((this->index + 1) == 1)
		return (std::cout << "No contact to display" << std::endl);
	while (true)
	{
		std::cout << "Please enter the index of the contact: ";
		if (!getline(std::cin, input))
			return (std::cout << "Error reading input\n", exit(1));
		if (input == "EXIT")
			break ;
		if (input.empty() || !is_number(input))
			std::cout << "Invalid index, please try again" << std::endl;
		else
			this->get_contact(stoi(input)).get_full_info();
	}
}

short	PhoneBook::get_num_contact(void) {
	return (this->index);
}

Contact	PhoneBook::get_contact(short index) {
	return (this->_contacts[index]);
}