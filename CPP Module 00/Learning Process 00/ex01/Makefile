# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 05:50:32 by mkaruvan          #+#    #+#              #
#    Updated: 2022/05/17 11:28:31 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re

