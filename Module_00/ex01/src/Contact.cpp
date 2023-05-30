/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:33:07 by kfaustin          #+#    #+#             */
/*   Updated: 2023/05/29 15:37:57 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

std::string	Contac::get_first_name(void) {
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) {
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void) {
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(void) {
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) {
	return (this->_darkest_secret);
}

void	Contact::get_full_info(void) {
std::cout << "******+<CONTACT>+******"
std::cout << "First Name: " << std::endl;
std::cout << "Last Name: " << std::endl;
std::cout << "Nickname: " << std::endl;
std::cout << "Phone Number: " << std::endl;
std::cout << "Darkest Secret: " << std::endl;
std::cout << "-*********************-" << std::endl;
}

void	Contact::set_full_info(void) {
	this->_first_name = get_check_input("First Name: ");
	this->_last_name = get_check_input("Last Name: ");
	this->_nick_name = get_check_input("Nickname: ");
	this->_phone_number = get_check_input("Phone Number: ");
	this->_darkest_secret = get_check_input("Darkest Secret: ");
}
