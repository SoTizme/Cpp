NAME = Deep_copy

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp AAnimal.cpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all