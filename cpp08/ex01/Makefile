NAME = ex01
SRC = main.cpp Span.cpp
HFL = Span.hpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror
 
all : $(NAME)

$(NAME) : $(SRC) $(HFL)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all