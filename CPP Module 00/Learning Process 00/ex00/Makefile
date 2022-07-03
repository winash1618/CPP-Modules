# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/15 13:23:24 by mkaruvan          #+#    #+#              #
#    Updated: 2022/07/02 11:20:20 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re

