NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_puthex.c\
		ft_putad.c

OBJ = $(SRC:.c=.o)

INCLUDE = ft_printf.h

$(NAME): $(OBJ) $(INCLUDE)
	ar rc $(NAME) $(OBJ) $^

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean