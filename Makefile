FILES = ./src/ft_entrypoint.o ./src/push_swap.o ./src/push_swap_utils.o main.o
CC = cc
C_FLAGS = -Wall -Werror -Wextra -g
NAME = push_swap
LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(FILES)
	$(CC) $(C_FLAGS) $^ -o $@

.o: .c
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm -f $(FILES) && make -C ./libft clean

fclean: clean
	rm -f $(NAME) && rm -f $(LIBFT)

re: clean all

$(LIBFT):
	make -C ./libft
	
.PHONY: all $(NAME) $(LIBFT) clean fclean re