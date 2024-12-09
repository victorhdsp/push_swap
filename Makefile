FILES=./src/entrypoint.o ./src/push_swap.o ./src/push_swap_utils.o ./src/messages.o ./src/commands/push.o ./src/commands/generic.o ./src/commands/roll.o ./src/commands/reverse_roll.o ./src/mind/radix.o ./src/mind/my.o ./src/mind/mind.o main.o
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