# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 16:39:52 by kfaustin          #+#    #+#              #
#    Updated: 2023/06/03 17:54:31 by kfaustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -g
VERS	= -std=c++98

SRC		= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $@ $(VERS)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
