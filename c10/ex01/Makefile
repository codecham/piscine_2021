NAME    = ft_cat

CC      = gcc

CFLAGS  = -Wall -Wextra -Werror

SRCS    = 	ft_cat.c \
			ft_display_file.c \
			ft_display_stdin.c \
			ft_puterr.c

OBJS    = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.c.o:
	${CC} ${CFLAGS} -c ${SRCS}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re