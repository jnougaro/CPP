# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 10:53:27 by jnougaro          #+#    #+#              #
#    Updated: 2022/03/11 14:27:20 by jnougaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= base

SRCS	= main.cpp \
			Base.cpp

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
