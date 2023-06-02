#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_index = 0;
	this->_size = 0;
}

void	PhoneBook::add() {
	std::cout << "\nADD - New Contact:" << std::endl;
	this->_contacts[this->_index].set_full_info();
	std::cout << "Success!" << std::endl;
	this->_index++;
	this->_size++;
	if (this->_index == 8)
		this->_index = 0;
}

void	PhoneBook::search() {
	int			num;
	std::string	input;

	if (this->_size == 0)
	{
		std::cout << "\nNo contact to display\n" << std::endl;
		return ;
	}
	while (true)
	{
		this->search_display(10);
		std::cout << "\nPlease enter the index of the contact: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		if (input.empty() || !is_number(input))
		{
			std::cout << std::endl << input << " is an invalid input, please try again" << std::endl;
			continue ;
		}
		num = stoi(input);
		if (num < 0 || num >= this->_size || num > 7)
			std::cout << "\nError: Index out of range, please try again\n" << std::endl;
		else
			this->get_contact(num).get_full_info();
	}
}

void	PhoneBook::search_display(int spc) {
	int		i;

	for (i = 0; (i < this->_size && i < 8); i++) {
		std::cout << std::setw(spc) << i << "|";
		std::cout << std::setw(spc) << string_form(get_contact(i).get_first_name()) << "|";
		std::cout << std::setw(spc) << string_form(get_contact(i).get_last_name()) << "|";
		std::cout << std::setw(spc) << string_form(get_contact(i).get_nick_name()) << "|";
		std::cout << std::endl;
	}
}

Contact	PhoneBook::get_contact(int index) {
	return (this->_contacts[index]);
}