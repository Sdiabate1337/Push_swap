NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = create_stack.c input_check.c main.c push.c rotate.c sort.c \
	  reverse_rotate.c stack.c swap.c utils.c utils2.c utils3.c
OBJ = $(SRC:.c=.o)

green = \033[0;32m

all: $(NAME)
$(NAME): $(OBJ)
		@echo "$(green)Creating $@"
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: all clean

.PHONY: all clen fclean re