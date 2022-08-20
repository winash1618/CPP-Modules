# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 17:57:23 by mkaruvan          #+#    #+#              #
#    Updated: 2022/08/20 13:52:51 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harl

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