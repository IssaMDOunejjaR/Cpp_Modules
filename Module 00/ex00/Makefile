# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 18:06:08 by iounejja          #+#    #+#              #
#    Updated: 2021/05/31 16:33:15 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= clang++ 
FLAGS	= -Wall -Wextra -Werror
EXEC	= megaphone
LIB		= lib.a
SRCS	= megaphone.cpp
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