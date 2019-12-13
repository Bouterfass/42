CC = gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ./*.c

OBJ = $(SRCS:.c=.o)

$(NAME):
		$(CC) $(CFLAGS) -I. -c $(SRCS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
		
all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all
