/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:26:48 by kfaustin          #+#    #+#             */
/*   Updated: 2023/06/03 17:43:47 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int			i;
	//std::string	zombie_name;
	Zombie		*zombie_ptr;

	if (argc == 1)
	{
		std::cout << "Insert at least one zombie name" << std::endl;
		return (0);
	}
	i = 0;
	while (argv[++i])
	{
		std::string zombie_name(argv[i]);
		std::cout << "\nThis is a Stack Zombie" << std::endl;
		randomChump(zombie_name);
		std::cout << "\nThis is a Heap Zombie" << std::endl;
		zombie_ptr = newZombie(zombie_name);
		zombie_ptr->announce();
		delete (zombie_ptr);
	}
	return (0);
}
