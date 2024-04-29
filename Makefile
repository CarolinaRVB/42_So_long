# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 15:38:32 by crebelo-          #+#    #+#              #
#    Updated: 2023/12/18 20:48:05 by crebelo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS = so_long_utils_1.c \
	   so_long_utils_2.c \
	   so_long_utils_3.c \
	   so_long_exits.c \
	   main.c \
	   so_long_build.c \
	   so_long_check.c \
	   so_long_init.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra -g #-fsanitize=address

MLXFLAGS = -Lminilibx-linux -lmlx -L/usr/lib -Iminilibx-linux -lXext -lX11 -lm -lz

LIBFT_DIR = libft

LIBFT_A = $(LIBFT_DIR)/libft.a

SO_LONG_LIB = so_long.a

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(SO_LONG_LIB) $(OBJS)
	@make -C minilibx-linux > /dev/null
	@$(CC) $(CFLAGS) -I/usr/include $(OBJS) $(LIBFT_A) $(SO_LONG_LIB) $(MLXFLAGS) -o $(NAME) > /dev/null

$(SO_LONG_LIB): $(OBJS)
	@make -C $(LIBFT_DIR) > /dev/null
	@ar rcs $(SO_LONG_LIB) $(OBJS) $(LIBFT_A) > /dev/null
	
clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean > /dev/null

fclean:	clean
	@rm -f $(SO_LONG_LIB)
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean > /dev/null

re:	fclean all

.PHONY: all clean fclean re
