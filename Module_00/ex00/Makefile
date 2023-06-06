NAME	= megaphone

CXX		= c++
CPPFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC		= megaphone.cpp

all: $(NAME)

$(NAME):
		$(CXX) $(CPPFLAGS) $(SRC) -o $@

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
