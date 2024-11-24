FILES=ft_atoi.o ft_calloc.o ft_isdigit.o ft_memcpy.o ft_memmove.o ft_memset.o ft_split.o ft_strchr.o ft_strlen.o ft_substr.o ft_strjoin.o ft_strdup.o ft_toupper.o ft_strncmp.o ft_atol.o
CC=clang -Wall -Werror -Wextra -I ./ -ggdb
AR=ar
AR_FLAGS=-rcs
NAME=libft.a

all: $(NAME)

$(NAME): $(FILES)
	$(AR) $(AR_FLAGS) $@ $^

.o: .c
	$(CC) -c $< -o $@

clean:
	rm -f $(FILES);

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all $(NAME) clean fclean re