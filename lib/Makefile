##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME		=	libmy.a

CPPFLAGS	=	-I ./include/ -W -Wall -Wextra

OBJ			=	$(SRCS:.c=.o)

SRCS    =	my_putchar.c		\
			my_putstr.c			\
			my_strlen.c			\
			my_putnbr.c			\
			my_strcmp.c			\
			my_atoi.c			\
			my_free_array.c		\
			my_strdup.c			\
			my_strcpy.c			\

all :	$(NAME)
$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY:	all clean fclean re
