NAME	= ref

CXX		= c++
CPPFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC		= main.cpp

all: $(NAME)

$(NAME):
		$(CXX) $(CPPFLAGS) $(SRC) -o $@

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all
