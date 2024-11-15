FILES = ft_atoi.o ft_calloc.o ft_isdigit.o ft_memcpy.o ft_memmove.o ft_memset.o ft_split.o ft_strchr.o ft_strlen.o ft_substr.o
HEADER = -I ./src/
CC = cc
C_FLAGS = -Wall -Werror -Wextra $(HEADER)
AR = ar
AR_FLAGS = -rcs
NAME = libft.a

all: $(NAME)

$(NAME): $(FILES)
	$(AR) $(AR_FLAGS) $@ $^

.o: .c
	$(CC) -Wall -Wextra -Werror -g -c $< -o $@

clean:
	rm -f $(FILES) $(BONUS_FILES);

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all $(NAME) clean fclean re