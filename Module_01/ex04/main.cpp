/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:49:29 by kfaustin          #+#    #+#             */
/*   Updated: 2023/06/04 20:50:02 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		line_buffer;
	std::string		file_in;
	std::string		file_out;
	std::string		s1;
	std::string		s2;
	const char 			*ptr_fileout;

	if (argc != 4) {
		std::cout << "Args must be 4" << std::endl;
		return (1);
	}
	file_in = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	file_out = file_in.append(".replace");
	ptr_fileout = file_out.c_str();

	return (0);
}