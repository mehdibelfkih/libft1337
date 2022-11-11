# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 09:52:57 by ebelfkih          #+#    #+#              #
#    Updated: 2022/11/11 04:57:06 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MANDATORY_PART = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_striteri.c ./ft_isdigit.c ./ft_isprint.c ./ft_itoa.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_strchr.c ./ft_strdup.c ./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_split.c ./ft_strtrim.c ./ft_substr.c ./ft_tolower.c ./ft_toupper.c

BONUS_PART = ./ft_lstadd_back.c ./ft_lstadd_front.c ./ft_lstlast.c ./ft_lstnew.c ./ft_lstsize.c ./ft_lstdelone.c ./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c
NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = cc -c
HDRS = libft.h
OBJ_MANDATORY = $(MANDATORY_PART:.c=.o)
OBJ_BONUS = $(OBJ_MANDATORY) $(BONUS_PART:.c=.o)

%.o:%.c
	@cc -Wall -Wextra -Werror -o $@ -c $<

$(NAME): $(OBJ_MANDATORY) $(HDRS)
	@$(CC) $(MANDATORY_PART) $(FLAGS)
	@ar r $(NAME) $(OBJ_MANDATORY)

bonus: $(OBJ_BONUS) $(HDRS)
	@$(CC) $(MANDATORY_PART) $(BONUS_PART) $(FLAGS)
	@ar r $(NAME) $(OBJ_BONUS)

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ_BONUS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
