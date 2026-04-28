NAME		= libftprintf.a
FILES		= 
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
