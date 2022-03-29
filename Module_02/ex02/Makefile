# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 10:53:27 by jnougaro          #+#    #+#              #
#    Updated: 2022/02/25 13:21:51 by jnougaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

SRCS	= main.cpp \
			Fixed.cpp

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
