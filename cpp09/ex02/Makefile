NAME = PmergeMe
SRC = main.cpp PmergeMe.cpp
HFL = PmergeMe.hpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror 

all : $(NAME)

OBJS = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(HFL) $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all