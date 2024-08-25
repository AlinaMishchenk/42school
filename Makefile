# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almishch <almishch@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 15:27:29 by almishch          #+#    #+#              #
#    Updated: 2024/08/24 19:44:52 by almishch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		/*ft_strchr.c \*/
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_toupper.c \
		ft_tolower.c \

BONUS = \
		ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstsize_bonus.c \

OBJ = ${SRC:.c=.o}

BONUS_OBJ = ${BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)

bonus: $(NAME)
	@$(COMPILE) $(BONUS)
	@$(LIB) $(BONUS_OBJ)
clean:
	@$(REMOVE) $(OBJ) $(BONUS_OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re bonus
