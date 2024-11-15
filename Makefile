FILES = ./src/ft_entrypoint.o ./src/push_swap.o ./src/push_swap_utils.o ./src/push_swap_utils_test.o main.o
CC = cc
C_FLAGS = -Wall -Werror -Wextra -g -I ./
NAME = push_swap
LIBFT = ./libft/libft.a
PRINTF = ./printf/libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(FILES)
	$(CC) $(C_FLAGS) $^ -o $@ $(LIBFT) $(PRINTF)

.o: .c
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm -f $(FILES) && make -C ./libft clean && make -C ./printf clean

fclean: clean
	rm -f $(NAME) && rm -f $(LIBFT) $(PRINTF)

re: clean all

$(LIBFT):
	make -C ./libft

$(PRINTF):
	make -C ./printf
	
.PHONY: all $(NAME) $(LIBFT) $(PRINTF) clean fclean re