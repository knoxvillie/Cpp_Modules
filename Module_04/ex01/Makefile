
NAME	= bin

CXX		= c++
CPPFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC		= Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp \
			WrongCat.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CPPFLAGS) $(OBJ) -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all