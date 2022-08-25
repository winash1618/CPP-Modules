# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 17:25:02 by mkaruvan          #+#    #+#              #
#    Updated: 2022/08/25 10:02:18 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Bureaucrat.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp \
	PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp \
	Intern.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME = poly

%.o : %.cpp
			$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re