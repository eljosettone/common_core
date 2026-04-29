NAME		= libftprintf.a
FILES		= ft_check.c \
				ft_hexa_lower.c \
				ft_hexa_upper.c \
				ft_printf.c \
				ft_putnbr.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putunbr.c \
				ft_point_hexa.c 
OBJ			= $(FILES:%.c=%.o)
CFLAGS		= -Wall -Werror -Wextra 
CC			= gcc

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
