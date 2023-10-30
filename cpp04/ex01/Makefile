NAME = Deep_copy

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all