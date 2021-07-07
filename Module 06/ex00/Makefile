# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 14:04:51 by iounejja          #+#    #+#              #
#    Updated: 2021/07/06 11:58:50 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC	= a.out
CC		= clang++
FLAGS	= -Wall -Wextra -Werror
LIB		= lib.a
SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
		ar rcs $(LIB) $(OBJS)
		$(CC) $(FLAGS) $(LIB) -o $(EXEC)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf $(LIB)

fclean: clean
	rm -rf $(EXEC)

re: fclean all