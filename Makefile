NAME	=	libftprintf.a

SRCS	=	ft_printf.c		mainf.c\
			hex.c			ptr.c\
			unsigned.c		ft_itoa.c\
			ft_putchar_fd.c

HEADER	=	ft_printf.h
OBJ		=	$(SRCS:%.c=%.o)

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

AR		= ar r
RM		= rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re
