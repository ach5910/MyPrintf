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

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIB_PATH = ./libft
LIBFT = $(LIB_PATH)/libft.a
LIBFT_LINK = -L$(LIB_PATH) -lft

INC_DIR +=  include/ libft/
CFLAGS += $(foreach d, $(INC_DIR), -I$d)

AR = ar

RLIB = ranlib

SRC_DIR = src
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
			ft_printf_uint.c \
			ft_printf_binary.c \
			ft_get_wide_char.c \
			ft_textcolor.c \
			ft_putuint.c \

LIBFT_FUNC = ft_isdigit \
			ft_memalloc \
			ft_memdel \
			ft_putchar \
			ft_putstr \
			ft_strchr \
			ft_strdel \
			ft_strdup \
			ft_strlen \
			ft_strjoin \
			ft_strnew \
			ft_bzero \
			ft_strcpy \
			ft_strncpy \

SRC = $(addprefix src/, $(SRC_BASE))

OBJS = $(addprefix obj/, $(SRC_BASE:.c=.o))
OBJS += $(foreach fun, $(LIBFT_FUNC), obj/libft/$(fun).o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(OBJS): | obj

obj:
	mkdir -p $@
	mkdir -p $@/libft

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/libft/%.o: libft/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(AR) -rcs $@ $^ $(LIBFT)
	$(RLIB) $@

test: $(NAME)
	$(CC) $(CFLAGS) -o $@ src/main.c -L. -lftprintf $(LIBFT_LINK)

clean:
	rm -f $(OBJS)
	make -C ./libft clean

fclean:
	rm -rf $(NAME)
	rm -rf obj
	rm -rf test
	make -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re
