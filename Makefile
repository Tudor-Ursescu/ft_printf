# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 15:59:46 by tursescu          #+#    #+#              #
#    Updated: 2024/06/22 16:43:20 by tursescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar_pr.c ft_putnbr_pr.c ft_strlen_pr.c\
		ft_putstr_pr.c ft_puthex_pr.c

NAME = libftprintf.a

INCL = ft_printf.h

OBJS := $(SRCS:.c=.o)

CC = cc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re