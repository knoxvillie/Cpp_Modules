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

std::string	Contact::get_nick_name() {
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(void) {
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) {
	return (this->_darkest_secret);
}

void	Contact::get_full_info(void) {

}
