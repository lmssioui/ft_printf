NAME = libftprintf.a

SRC = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_strlen.c ft_print_hexa.c ft_print_hexa1.c ft_print_pointer.c ft_print_unsg.c 

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all = $(NAME)

$(NAME) : $(OBJ)

.c.o :
	cc $(CFLAGS) -c $< -o $@
	ar -rc $(NAME) $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re