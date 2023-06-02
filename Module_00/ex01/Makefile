NAME	= phonebook

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -g
VERS	= -std=c++98

SRCDIR	= ./src/
SRC		= Contact.cpp main.cpp PhoneBook.cpp src.cpp
OBJ		= $(addprefix $(SRCDIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(VERS) $(OBJ) -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY:
