NAME = btc
SRC = main.cpp BitcoinExchange.cpp
HFL = BitcoinExchange.hpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -g3

all : $(NAME)

OBJS = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJS) $(HFL)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all