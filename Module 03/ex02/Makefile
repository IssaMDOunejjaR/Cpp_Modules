# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/25 09:15:29 by iounejja          #+#    #+#              #
#    Updated: 2021/06/26 18:51:16 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98
EXEC 	= flagtrap
LIB		= lib.a
SRCS	= main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
		ar rcs $(LIB) $(OBJS)
		$(CC) $(FLAGS) $(LIB) -o $(EXEC)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf $(LIB)

fclean: clean
	rm -rf $(EXEC)

re: fclean all