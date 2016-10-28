# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahunt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/24 20:29:02 by ahunt             #+#    #+#              #
#    Updated: 2016/10/24 20:53:58 by ahunt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf
CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIB_PATH = ./libft
LIB = $(LIB_PATH)/libft.a
LIB_LINK = -L$(LIB_PATH) -lft

INC_DIR = ./include
INCS = -I$(INC_DIR)

SRC_DIR = ./src
SRC_BASE =	ft_printf.c \
						ft_get_length.c \
						ft_parse_args.c \
						ft_printf_char.c \
						ft_printf_hex.c \
						ft_printf_int.c \
						ft_printf_oct.c \
						ft_printf_ptr.c \
						ft_printf_string.c \
						ft_printf_uint.c \
						ft_putuint.c \
		   			main.c

OBJ_DIR = ./obj

OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_BASE:.c=.o))

all: obj $(LIB) $(NAME)

obj:
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(LIB_PATH) $(INCS) -o $@ -c $<

$(LIB):
	make -C $(LIB_PATH)

$(NAME): $(OBJS)
	$(CC) $(LIB_LINK) -o $@ $^

clean:
	rm -rf $(OBJ_DIR)
	make -C $(LIB_PATH) clean

fclean:
	rm -rf $(NAME)
	make -C $(LIB_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
