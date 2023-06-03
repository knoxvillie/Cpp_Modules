NAME	= ref

CPP		= c++
CPPFLAGS= -Wall -Wextra -Werror -g
VERS	= -std=c++98

SRC		= main.cpp

all: $(NAME)

$(NAME):
		$(CPP) $(CPPFLAGS) $(VERS) $(SRC) -o $@

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all
