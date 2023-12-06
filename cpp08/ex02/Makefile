NAME = ex02
SRC = main.cpp
HFL = MutantStack.hpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address
 
all : $(NAME)

$(NAME) : $(SRC) $(HFL)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all