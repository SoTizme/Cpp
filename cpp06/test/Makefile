NAME = a.out

SRC = main.cpp
RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g
 
all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all