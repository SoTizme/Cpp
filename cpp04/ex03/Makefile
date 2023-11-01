NAME = Interface

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all