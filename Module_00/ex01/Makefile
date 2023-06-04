NAME	= phonebook

CC		= c++
CPPFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRCDIR	= ./src/
SRC		= Contact.cpp main.cpp PhoneBook.cpp src.cpp
OBJ		= $(addprefix $(SRCDIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
