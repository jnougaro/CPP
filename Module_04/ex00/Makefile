# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 10:53:27 by jnougaro          #+#    #+#              #
#    Updated: 2022/03/03 13:12:29 by jnougaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal

SRCS	= main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

OBJS	= ${SRCS:.cpp=.o}

CC 	= c++
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra -std=c++98

all:		${NAME}

.cpp.o:
		${CC} ${CFLAGS} -c $< -o $@

$(NAME):	${OBJS}
			${CC} ${OBJS} -o $(NAME)

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
