/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:58:47 by kfaustin          #+#    #+#             */
/*   Updated: 2023/06/03 19:29:00 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int			i;
	int			num;
	Zombie		*horde;

	num = (argc - 1);
	if (!num)
	{
		std::cout << "Create at least one zombie" << std::endl;
		return (0);
	}
	i = 0;
	horde = zombieHorde(num, "generic");
	while (argv[i + 1])
	{
		std::string	name(argv[i + 1]);
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
