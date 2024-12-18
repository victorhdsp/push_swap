FILES= main.o ./src/input_normalizer.o ./src/messages.o ./src/push_swap_utils.o ./src/push_swap_utils_string.o ./src/push_swap_test.o ./src/stack_manager.o ./src/generic_commands.o ./src/algorithm.o ./src/push.o ./src/roll.o ./src/reverse_roll.o ./src/swap.o
CC=clang -Wall -Werror -Wextra -I ./ -ggdb
NAME=push_swap
LIBFT=./libft/libft.a
PRINTF=./printf/libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(FILES)
	$(CC) $^ -o $@ $(LIBFT) $(PRINTF)

.o: .c
	$(CC) -c $< -o $@

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