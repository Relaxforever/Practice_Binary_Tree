CC = gcc
SRC = Inorder.c Binary.h Create_Tree.c Preorder.c Postorder.c calculatesize.c
OBJ = ${SRC:%.c=%.o}
NAME = Trees_exercises
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic
all: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}
clean:
	${RM} *~ ${NAME}

oclean:
	${RM} *.o

fclean: clean oclean

re: oclean all
