NAME = rush-02
SRC = *.c

$(NAME):
	gcc -Wall -Werror -Wextra -g -o ${NAME} ${SRC}

all: ${NAME}
clean: fclean
fclean:
	rm -f ${NAME}
re: fclean all