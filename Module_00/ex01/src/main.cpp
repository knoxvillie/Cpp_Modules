/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:25:18 by kfaustin          #+#    #+#             */
/*   Updated: 2023/05/29 14:26:14 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

int	main(int argc, char **argv)
{
	std::string	input;
	PhoneBook	phone;

	(void)argc;
	(void)argv;
	std::cout << "Phonebook++ verion 1.0" << std::endl;
	while (true)
	{
		if (input == "EXIT")
			break ;
		std::cout << "Commands: ADD | SEARCH | EXIT " << std::endl;
		std::cout << "Enter a valid command: ";
		if (input == "ADD")
			phone.add();
		else if (input == "SEARCH")
			phone.search();
		else
			std::cout << "Invalid cmd, try again" << std::endl;
	}
	return (0);
}
