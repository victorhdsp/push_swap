FILES= main.o ./src/input_normalizer.o ./src/messages.o ./src/push_swap_utils.o ./src/push_swap_utils_string.o ./src/push_swap_test.o ./src/stack_manager.o ./src/generic_commands.o ./src/algorithm.o ./src/push.o ./src/roll.o ./src/reverse_roll.o ./src/swap.o
CC=cc -Wall -Werror -Wextra -I ./ -ggdb
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

r3: all
	clear
	./$(NAME) $(shell shuf -i 1-3 | sed -e :a  -e 'N;s/\n/ /;ta')

r5: all
	clear
	./$(NAME) $(shell shuf -i 1-5 | sed -e :a  -e 'N;s/\n/ /;ta')

r100: all
	clear
	./$(NAME) $(shell shuf -i 1-100 | sed -e :a  -e 'N;s/\n/ /;ta')

r500: all
	clear
	./$(NAME) $(shell shuf -i 1-500 | sed -e :a  -e 'N;s/\n/ /;ta')
	
.PHONY: all clean fclean re