##
## EPITECH PROJECT, 2023
## make
## File description:
## make
##

SRC	=	angle.c			\
		coeff_vec.c		\
		create_vector.c		\
		diff_vec.c		\
		norm_vec.c		\
		position_vec.c		\
		sums_vec.c		\

OBJ	=	$(SRC:.c=.o)

all:	compile execute

compile:	$(OBJ)
	ar rc libmy.a $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)
	rm libmy.a

fclean: clean
	rm -f 101pong

re: fclean 101pong

execute:
	gcc main.c -o 101pong -Wall -Wextra -L. -lmy -lm
