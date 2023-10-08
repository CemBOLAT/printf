# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:34:11 by cbolat            #+#    #+#              #
#    Updated: 2023/10/09 00:43:41 by cbolat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_itoa.c \
		ft_printf.c \
		ft_putnbr.c \
		ft_putnbrhexa.c \
		ft_putnbrui.c \
		ft_putptr.c \
		ft_putstr.c \

OBJ = ft_itoa.o \
		ft_printf.o \
		ft_putnbr.o \
		ft_putnbrhexa.o \
		ft_putnbrui.o \
		ft_putptr.o \
		ft_putstr.o \

all: $(NAME)

${NAME}: $(OBJ)
	@gcc ${FLAGS} -c ${SRC}
	@ar -rcs ${NAME} ${OBJ}

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
