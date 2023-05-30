/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:26:50 by kfaustin          #+#    #+#             */
/*   Updated: 2023/05/29 15:07:54 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"
# include "./header.hpp"

class PhoneBook {
	private:
		short	index;
		Contact	_contacts[8];

	public:
		PhoneBook(void);
		~PhoneBook();
		void	add(void);
		void	search(void);
		short	get_num_contact(void);
		Contact	get_contact(short index);

};

#endif
