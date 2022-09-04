SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Wall
AR		= ar -rcs
ARF		= ranlib
INCS	= includes/

.c.o:
			${CC} ${CFLAGS} -I${INCS} -c $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${ARF} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re