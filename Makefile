# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 15:59:46 by tursescu          #+#    #+#              #
#    Updated: 2025/03/20 13:17:04 by tursescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = src/ft_printf.c src/ft_putchar_pr.c src/ft_putnbr_pr.c src/ft_strlen_pr.c\
		src/ft_putstr_pr.c src/ft_puthex_pr.c src/ft_print_unsigned.c\
		src/ft_putptr_pr.c

NAME = libftprintf.a

INCL = includes/ft_printf.h

OBJS := $(SRCS:.c=.o)

CC = cc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re