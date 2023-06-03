/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:50:54 by kfaustin          #+#    #+#             */
/*   Updated: 2023/06/03 16:52:40 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};
void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
