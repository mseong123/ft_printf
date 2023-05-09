SRCS_NAME = ft_printf ft_itoa_base format_c format_s format_p format_d_i format_u format_x format_upper_x

SRCS = $(SRCS_NAME:=.c)

OBJECTS = $(SRCS:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -I ./libft $<	

$(NAME): $(OBJECTS)
	make bonus -C ./libft
	cp ./libft/libft.a $(NAME) 
	ar rs $(NAME) $(OBJECTS)

clean:
	make clean -C ./libft
	rm -f $(OBJECTS)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
