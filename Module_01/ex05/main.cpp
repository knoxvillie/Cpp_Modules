/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:15:05 by kfaustin          #+#    #+#             */
/*   Updated: 2023/06/06 14:15:06 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	obj;

	std::cout << std::endl;
	std::cout << "------: HARL :------" << std::endl;
	obj.complain("DEBUG");
	std::cout << std::endl << std::endl;
	obj.complain("INFO");
	std::cout << std::endl << std::endl;
	obj.complain("WARNING");
	std::cout << std::endl << std::endl;
	obj.complain("ERROR");
	std::cout << "------------------" << std::endl;
	return (0);
}