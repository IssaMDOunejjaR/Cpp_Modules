# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/02 13:35:01 by iounejja          #+#    #+#              #
#    Updated: 2021/07/03 09:10:19 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC	= bureaucrat
CC		= clang++
FLAGS	= -Wall -Wextra -Werror
LIB		= lib.a
SRCS	= main.cpp \
			Bureaucrat.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	ar rcs $(LIB) $(OBJS)
	$(CC) $(FLAGS) $(LIB) -o $(EXEC)

%.o: %.cpp Bureaucrat.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf $(LIB)

fclean: clean
	rm -rf $(EXEC)

re: fclean all