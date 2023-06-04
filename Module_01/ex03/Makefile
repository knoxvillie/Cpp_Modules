# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 17:12:11 by kfaustin          #+#    #+#              #
#    Updated: 2023/06/04 17:20:21 by kfaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= weapon

CPP		= c++
CPPFLAGS= -Wall -Wextra -Werror -g
VERS	= -std=c++98

SRC		= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(CPPFLAGS) $(VERS) $(OBJ) -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
