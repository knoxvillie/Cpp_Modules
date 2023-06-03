# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 19:37:56 by kfaustin          #+#    #+#              #
#    Updated: 2023/06/03 19:40:44 by kfaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -g
VERS	= -std=c++98

SRC		= main.cpp Zombie.cpp zombieHorde.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(VERS) $(OBJ) -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
