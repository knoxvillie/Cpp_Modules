COMP	= c++
FLAGS	= -Wall -Wextra -Werror -g
VERS	= -std=c++98

NAME	= megaphone
SRC		= megaphone.cpp

all: $(NAME)

$(NAME):
		$(COMP) $(FLAGS) $(VERS) $(SRC) -o $@

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY:
