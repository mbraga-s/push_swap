# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 18:27:44 by mbraga-s          #+#    #+#              #
#    Updated: 2023/11/03 17:22:50 by mbraga-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of my library
NAME = libft.a

#Function names (sources)
SRCS = ft_atoi ft_putstr_fd \
ft_lstnew ft_lstadd_front ft_lstadd_back ft_lstlast ft_lstsize\

#Compiler and standard flags
CC = cc
CFLAGS = -Wall -Werror -Wextra 

RM = rm -f

all:$(NAME)

$(NAME): $(SRCS:=.o)
		ar rc $(NAME) $(SRCS:=.o)

clean:
	$(RM)	$(SRCS:=.o)

fclean: clean
		$(RM)	$(NAME)

re:	fclean	$(NAME)

.PHONY: clean fclean re bonus