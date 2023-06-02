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
		int		_index;
		int		_size;
		Contact	_contacts[8];

	public:
		PhoneBook(void);
		void	add(void);
		void	search(void);
		void	search_display(int spc);
		Contact	get_contact(int index);
};

#endif
