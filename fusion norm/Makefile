GCC = gcc

NAME = libft

CFLAGS = -Wall -Wextra -Werror -Iincludes -o $(NAME)

SRCS = ./*.c

all:
	$(GCC) $(SRCS) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all
