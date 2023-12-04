NAME = libftprintf.a

SRC = ft_putnbr.c ft_putstr.c ft_putchar.c ft_strlen.c ft_print_hexa.c ft_print_hexa1.c ft_print_pointer.c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all = $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	cc $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
