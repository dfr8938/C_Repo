HEADER		= ./includes/
PATH_SRCS	= ./srcs/
SRCS		= ${PATH_SRCS}ft_putchar.c ${PATH_SRCS}ft_print_comb.c
NAME		= ft_print_comb
CC		= gcc
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror

${NAME}:	main.c
		${CC} ${CFLAGS} ${SRCS} main.c -I ${HEADER} -o ${NAME}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
