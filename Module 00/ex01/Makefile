# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/31 16:08:40 by iounejja          #+#    #+#              #
#    Updated: 2021/06/05 11:59:18 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= clang++ 
FLAGS	= -Wall -Wextra -Werror
EXEC	= crappy_phone_book
LIB		= lib.a
SRCS	= crappy_phone_book.cpp \
			utils.cpp \
			Contact.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
		ar rcs $(LIB) $(OBJS)
		$(CC) $(FLAGS) $(LIB) -o $(EXEC)

%.o: %.cpp utils.hpp Contact.class.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf $(LIB)

fclean: clean
	rm -rf $(EXEC)

re: fclean all