NAME = ex02

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
	ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

RM = rm -f
CC = c++
CFLAG = -std=c++98 -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CFLAG) $(SRC) -o $(NAME)

fclean :
		$(RM) $(NAME)

re : fclean all