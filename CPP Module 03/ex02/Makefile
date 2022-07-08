# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 17:03:53 by mkaruvan          #+#    #+#              #
#    Updated: 2022/07/08 17:01:31 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fragtrap

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re