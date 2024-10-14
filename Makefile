# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arenilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 10:18:03 by arenilla          #+#    #+#              #
#    Updated: 2024/10/07 10:18:08 by arenilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = so_long

CC          = gcc

CFLAGS      = -Wextra -Werror -Wall -I$(INC) -I$(LIBFT_DIR) -I$(MLX_DIR)

LDFLAGS     = -L$(LIBFT_DIR) -lft -L$(MLX_DIR) -lmlx -lX11 -lXext

INC         = ./

LIBFT_DIR   = libft/
LIBFT       = $(LIBFT_DIR)libft.a

MLX_DIR     = mlx_linux/
MLX         = $(MLX_DIR)libmlx.a

SRCS_DIR    = ./
OBJS_DIR    = objects/

SRCS_FILES	= $(wildcard $(SRCS_DIR)*.c)
OBJS_FILES  = $(SRCS_FILES:.c=.o)

SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS		= $(addprefix $(OBJS_DIR), $(OBJS_FILES))

all: $(NAME)

$(NAME): $(LIBFT) $(MLX) $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	[ -d $(OBJS_DIR) ] || mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -sC $(LIBFT_DIR)

$(MLX):
	make -sC $(MLX_DIR)

clean:
	rm -rf $(OBJS_DIR)
	make fclean -sC $(LIBFT_DIR)
	make clean -sC $(MLX_DIR)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
.SILENT: all clean fclean
