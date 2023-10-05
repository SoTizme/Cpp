NAME = Sed _is_for_losers

SRC = main.cpp 

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -g3

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

clean : 
		fclean

fclean :
	$(RM) $(NAME)

re : fclean all