NAME = ex00
SRC = main.cpp
HFL = easyfind.hpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror
 
all : $(NAME)

$(NAME) : $(SRC) $(HFL)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all