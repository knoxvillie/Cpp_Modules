/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:20:50 by kfaustin          #+#    #+#             */
/*   Updated: 2023/05/30 09:20:52 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

std::string	get_check_input(std::string str)
{
	std::string	input;

	input = "";
	while (input.empty())
	{
		std::cout << str;
		if (!(std::getline(std::cin, input)))
			return (std::cout << "Error reading input\n", exit(1));
		std::cout << std::endl;
	}
	return (input);
}

bool	is_number(std::string str)
{
	int	i;

	for (i = 0; i < str.size(); i++){
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}
