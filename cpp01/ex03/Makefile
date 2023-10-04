NAME = Unnecessary_violence

SRC = main.cpp Weapon.cpp HumanB.cpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

clean : 
		fclean

fclean :
	$(RM) $(NAME)

re : fclean all