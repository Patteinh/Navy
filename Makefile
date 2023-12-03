##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile
##

NAME		=	navy

CPPFLAGS	=	-W -Wall -Wextra

CFLAGS		= 	-I ./include/ -I $(LIB)include/

LFLAGS 		= 	-L $(LIB) -lmy

LDFLAGS		=	--coverage -lcriterion

SRC_DIR		=	./src/

TEST_DIR	=	./tests/

LIB			=	./lib/

SRCS	=	$(SRC_DIR)main.c				\
			$(SRC_DIR)help.c				\
			$(SRC_DIR)start_navy.c			\
			$(SRC_DIR)player_loop.c			\
			$(SRC_DIR)get_map_usr.c			\
			$(SRC_DIR)check_map.c			\
			$(SRC_DIR)get_map_ennemy.c		\
			$(SRC_DIR)create_map.c			\
			$(SRC_DIR)gestion_pid.c			\
			$(SRC_DIR)display_pid_map.c		\
			$(SRC_DIR)display_only_map.c	\
			$(SRC_DIR)init_handle_signal.c	\
			$(SRC_DIR)attack.c				\
			$(SRC_DIR)handle.c				\
			$(SRC_DIR)send_info.c			\
			$(SRC_DIR)check_info.c			\
			$(SRC_DIR)update_map.c			\
			$(SRC_DIR)engine_navy.c			\

TESTS_SRCS	=	$(TEST_DIR)tests.c	\

OBJS		=	$(SRCS:.c=.o)

TESTS_OBJS	=	$(TESTS_SRCS:.c=.o)

VAL_TO		=	--track-origins=yes
VAL_SL		=	--show-leak-kinds=all
VAL_LC		=	--leak-check=full

all: $(NAME)
	@echo "Build ok!"

build_lib :
	$(MAKE) -C $(LIB)

$(NAME): build_lib $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(CPPFLAGS) $(LFLAGS) $(LDFLAGS)

debug: MAKE += -E CFLAGS+=-g3
debug: CPPFLAGS += -g3
debug: $(NAME)
	@echo "Build ok!"

# tests_run: CFLAGS += --coverage
# tests_run: build_lib $(TESTS_OBJS)
# 	$(CC) -o $(NAME) $(TESTS_OBJS) $(CFLAGS) $(CPPFLAGS) $(LFLAGS) $(LDFLAGS)
# 	./$(NAME)

clean:
	$(RM) *.html
	$(RM) *.css
	$(RM) $(TEST_DIR)*.gcda
	$(RM) $(TEST_DIR)*.gcno
	$(RM) $(OBJS)
	$(RM) $(TESTS_OBJS)
	$(MAKE) clean -C $(LIB) -s
	@echo "Clean ok!"

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIB) -s
	@echo "Fclean ok!"

re: fclean all

.PHONY: all build_lib debug tests_run clean fclean re
