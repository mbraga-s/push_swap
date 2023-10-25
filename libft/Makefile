# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 18:27:44 by mbraga-s          #+#    #+#              #
#    Updated: 2022/11/22 17:47:37 by mbraga-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of my library
NAME = libft.a

#Function names (sources)
SRCS = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strchr ft_strrchr ft_strlcpy\
ft_strncmp ft_isalpha ft_isdigit ft_isalnum ft_strnstr\
ft_isascii ft_isprint ft_toupper ft_tolower ft_strlcat\
ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_itoa\
ft_strtrim ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd\
ft_putendl_fd ft_putnbr_fd ft_split\

#Bonus function names
BONUS = ft_lstnew ft_lstadd_back ft_lstadd_front\
ft_lstclear ft_lstdelone ft_lstlast ft_lstnew\
ft_lstsize ft_lstiter ft_lstmap\

#Compiler and standard flags
CC = cc
CFLAGS = -Wall -Werror -Wextra 

RM = rm -f

all:$(NAME)

$(NAME): $(SRCS:=.o)
		ar rc $(NAME) $(SRCS:=.o)

clean:
	$(RM)	$(SRCS:=.o)	$(BONUS:=.o)

fclean: clean
		$(RM)	$(NAME)

re:	fclean	$(NAME)

bonus:	$(NAME) $(BONUS:=.o)
		ar rc $(NAME) $(BONUS:=.o)

.PHONY: clean fclean re bonus