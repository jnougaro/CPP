# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 10:20:49 by jnougaro          #+#    #+#              #
#    Updated: 2022/02/23 10:20:51 by jnougaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRCS	= megaphone.cpp

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
