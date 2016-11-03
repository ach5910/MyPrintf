# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahunt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/24 20:29:02 by ahunt             #+#    #+#              #
#    Updated: 2016/10/31 16:46:26 by ahunt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRF = libprintf.a

NAME = libftprintf.a

FT_PRINTF = ft_printf

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
			ft_printf_wchar.c \
			ft_printf_hex.c \
			ft_printf_int.c \
			ft_printf_oct.c \
			ft_printf_ptr.c \
			ft_printf_string.c \
			ft_printf_wstring.c \
			ft_printf_mod.c \
			ft_printf_uint.c \
			ft_printf_binary.c \
			ft_get_wide_char.c \
			ft_textcolor.c \
			ft_putuint.c \
			main.c \

SRC = $(addprefix $(SRC_DIR)/, $(SRC_BASE))

AR = ar rcs

RLIB = ranlib

RM = rm -rf

OBJ_DIR = ./obj

OBJS = $(SRC_BASE:.c=.o)

all: obj $(LIB) $(PRF) $(NAME) $(FT_PRINTF)

obj:
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(LIB_PATH) $(INCS) -o $@ -c $<

$(LIB):
	make -C $(LIB_PATH)

$(FT_PRINTF): $(OBJS)
	$(CC) $(LIB_LINK) -o $@ $^

$(PRF):
	$(CC) $(CFLAGS) -I$(LIB_PATH) $(INCS) -c $(SRC)
	$(AR) $(PRF) $(OBJS)
	$(RLIB) $(PRF)

$(NAME):
	libtool -static -o libftprintf.a libprintf.a ./libft/libft.a
	$(RM) $(PRF)

clean:
	$(RM) $(OBJ_DIR)
	$(RM) $(OBJS)
	make -C $(LIB_PATH) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIB_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
