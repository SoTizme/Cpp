NAME = Megaphone

SRCS = megaphone.cpp

RM = rm -f
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	fclean

fclean:
	$(RM) $(NAME)

re: fclean all