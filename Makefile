NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror -fsanitize=address
SRC = main.c input_check.c create_stack.c utils.c utils2.c utils3.c \
	  push.c rotate.c simple_sort.c complexe_sort.c reverse_rotate.c stack.c swap.c 

OBJ = $(SRC:.c=.o)
INC = -I push_swap.h

ARGS = -422 115 655 -379 29 768

green = \033[0;32m

LEAK = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "$(green)Created $@"

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: all clean

valgrind:
	$(LEAK) $(NAME) $(ARGS)

.PHONY: all clean fclean re