COMP	= c++
CPPFLAGS= -Wall -Wextra -Werror -g -std=c++98

NAME	= megaphone
SRC		= megaphone.cpp

all: $(NAME)

$(NAME):
		$(COMP) $(FLAGS) $(SRC) -o $@

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
