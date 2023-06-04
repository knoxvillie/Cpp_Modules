/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:59:21 by kfaustin          #+#    #+#             */
/*   Updated: 2023/06/04 16:07:01 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "iostream"

class Weapon {

	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		std::string	getType(void);
		void		setType(std::string type);
};

#endif
