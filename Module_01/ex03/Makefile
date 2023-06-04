# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 17:12:11 by kfaustin          #+#    #+#              #
#    Updated: 2023/06/04 20:05:20 by kfaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= weapon

CPP		= c++
CPPFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC		= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
