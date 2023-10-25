NAME = FragTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all