# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 07:06:36 by mkaruvan          #+#    #+#              #
#    Updated: 2022/08/20 13:51:39 by mkaruvan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombieworld

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
