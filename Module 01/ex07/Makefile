# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 17:14:25 by iounejja          #+#    #+#              #
#    Updated: 2021/06/25 10:09:37 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= clang++ 
FLAGS	= -Wall -Wextra -Werror
EXEC	= replace
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