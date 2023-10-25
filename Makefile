# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 15:57:57 by mbraga-s          #+#    #+#              #
#    Updated: 2023/10/25 16:15:48 by mbraga-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = parse utils main

LIB = $(NAME).a

LIBFT_LIB = ./libft/libft.a
LIBFT_PATH = ./libft

CC = cc
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

RM = rm -fr

all: $(NAME)

$(NAME): $(LIBFT_LIB) $(LIB)
		$(CC) $(CFLAGS) $(LIB) $(LIBFT_LIB) -o $(NAME)

$(LIB): $(SRCS:=.o)
		ar rc $(LIB) $(SRCS:=.o)

$(LIBFT_LIB):  $(shell make -C $(LIBFT_PATH) -q)
	make -C$(LIBFT_PATH)

clean: libftclean
	$(RM)	$(SRCS:=.o)

libftclean: $(shell make -C $(LIBFT_PATH) -q)
	make -C$(LIBFT_PATH) clean

libftfclean: $(shell make -C $(LIBFT_PATH) -q)
	make -C$(LIBFT_PATH) fclean

fclean: clean libftfclean
		$(RM)	$(NAME) $(NAME).a

re:	fclean	$(NAME)

.PHONY: clean fclean re