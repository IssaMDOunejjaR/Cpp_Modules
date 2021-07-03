# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/02 13:35:01 by iounejja          #+#    #+#              #
#    Updated: 2021/07/03 16:08:59 by iounejja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC	= a.out
CC		= clang++
FLAGS	= 
LIB		= lib.a
SRCS	= main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	ar rcs $(LIB) $(OBJS)
	$(CC) $(FLAGS) $(LIB) -o $(EXEC)

%.o: %.cpp Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf $(LIB)

fclean: clean
	rm -rf $(EXEC)

re: fclean all