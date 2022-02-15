NAME = libftprintf.a

SRC =  ft_putchar.c \
	   ft_putstr.c \
	   calcul.c \
	   calculhexa.c \
	   ft_puttohexa.c \
	   ft_putunsigned.c \
	   ft_putvoid.c \
	   ft_putnbrdecimal.c \
	   ft_printf.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	cc $(FLAGS) $< -c

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
