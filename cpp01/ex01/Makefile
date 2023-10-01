NAME = Moar_brainz

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

RM = rm -f
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	fclean

fclean:
	$(RM) $(NAME)

re: fclean all