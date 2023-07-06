NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror -fsanitize=address
SRC = main.c input_check.c create_stack.c utils.c utils2.c utils3.c \
	  push.c rotate.c simple_sort.c complexe_sort.c reverse_rotate.c stack.c swap.c 
	  
OBJ = $(SRC:.c=.o)
INC = -I push_swap.h

green = \033[0;32m

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "$(green)Created $@"

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: all clean

.PHONY: all clean fclean re