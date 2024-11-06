# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 12:48:40 by crebelo-          #+#    #+#              #
#    Updated: 2023/12/07 17:48:56 by crebelo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

CC = gcc

SRC = \
	character/ft_isalnum.c \
	character/ft_isalpha.c \
	character/ft_isascii.c \
	character/ft_isdigit.c \
	character/ft_isprint.c \
	character/ft_toupper.c \
	character/ft_tolower.c \
	\
	ft_printf/ft_printf.c \
	ft_printf/ft_putnbr_hex.c \
	ft_printf/ft_putptr_hex.c \
	\
	get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c \
	\
	list/ft_lstadd_back.c \
	list/ft_lstadd_front.c \
	list/ft_lstclear.c \
	list/ft_lstdelone.c \
	list/ft_lstiter.c \
	list/ft_lstlast.c \
	list/ft_lstmap.c \
	list/ft_lstnew.c \
	list/ft_lstsize.c \
	\
	memory/ft_bzero.c \
	memory/ft_calloc.c \
	memory/ft_memchr.c \
	memory/ft_memcmp.c \
	memory/ft_memcpy.c \
	memory/ft_memmove.c \
	memory/ft_memset.c \
	\
	number/ft_itoa.c \
	number/ft_atoi.c \
	number/ft_putunbr.c \
	\
	print/ft_putchar_fd.c \
	print/ft_putendl_fd.c \
	print/ft_putnbr_fd.c \
	print/ft_putstr_fd.c \
	print/ft_printf_putchar_fd.c \
	print/ft_printf_putnbr_fd.c \
	print/ft_printf_putstr_fd.c \
	\
	string/ft_checkfileext.c \
	string/ft_checkiffileopens.c \
	string/ft_countchr.c \
	string/ft_split.c \
	string/ft_strchr.c \
	string/ft_strcmpchrs.c \
	string/ft_strdup.c \
	string/ft_striteri.c \
	string/ft_strjoin.c \
	string/ft_strlcat.c \
	string/ft_strlcpy.c \
	string/ft_strlen.c \
	string/ft_strlen_nl.c \
	string/ft_strmapi.c \
	string/ft_strncmp.c \
	string/ft_strnstr.c \
	string/ft_strrchr.c \
	string/ft_strtrim.c \
	string/ft_substr.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
