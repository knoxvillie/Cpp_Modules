NAME	= bank

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -g
VERS	= -std=c++98

SRC		= Account.cpp tests.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(VERS) $(OBJ) -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all