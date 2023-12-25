# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baltazar <baltazar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 15:11:42 by baltazar          #+#    #+#              #
#    Updated: 2023/12/25 15:11:51 by baltazar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables:
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

#Sources:
SRC = ft_printf.c ft_printf_utils.c libft_functions.c \
	ft_args_csp.c ft_args_diu.c ft_args_xXpercent.c
#BONUS = *.c

OBJ = $(SRC:%.c=%.o)
#BONUS_OBJ = $(BONUS:%.c=%.o)

#Rules:
all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(OBJ)

clean:
		@$(RM) $(OBJ)


fclean: clean
		@$(RM) $(NAME)

re: fclean all