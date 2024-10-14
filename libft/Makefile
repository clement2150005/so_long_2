# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 11:02:09 by arenilla          #+#    #+#              #
#    Updated: 2024/02/27 10:21:41 by arenilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -fPIE

FT_PRINTF_DIR = ft_printf

INCLUDE = libft.h

FT_PRINTF_SRC = $(addprefix $(FT_PRINTF_DIR)/, ft_printf.c ft_putchar.c \
				ft_putstr.c ft_putnbr.c ft_puthex.c ft_putptr.c ft_check.c \
				ft_putunbr.c)

SOURCES = ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_atoi.c\
		  ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_bzero.c\
		  ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c ft_calloc.c\
		  ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c ft_isalnum.c\
		  ft_memchr.c ft_strchr.c ft_strncmp.c ft_substr.c ft_strjoin.c\
		  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
		  get_next_line.c get_next_line_bonus.c $(FT_PRINTF_SRC)

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		ar -crs $(NAME) $(INCLUDE) $(OBJECTS)

clean:
		rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all
