/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:18:15 by arenilla          #+#    #+#             */
/*   Updated: 2024/10/07 10:18:18 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_movec(t_map **map, int new_y, int new_x)
{
	(*map)->map[(*map)->player.y][(*map)->player.x] = '0';
	(*map)->player.y = new_y;
	(*map)->player.x = new_x;
	(*map)->map[new_y][new_x] = 'P';
	(*map)->player.steps++;
	(*map)->player.coin++;
	ft_printf("Steps: %i Coins: %i\n", (*map)->player.steps,
		(*map)->player.coin);
	if ((*map)->player.coin == (*map)->ncollectable)
		(*map)->map[(*map)->y_exit][(*map)->x_exit] = 'E';
	return (1);
}

static int	ft_move0(t_map **map, int new_y, int new_x)
{
	char	c;

	c = (*map)->map[new_y][new_x];
	if (c == '0')
	{
		(*map)->map[(*map)->player.y][(*map)->player.x] = '0';
		(*map)->player.y = new_y;
		(*map)->player.x = new_x;
		(*map)->map[new_y][new_x] = 'P';
		(*map)->player.steps++;
		ft_printf("Steps: %i Coins: %i\n", (*map)->player.steps,
			(*map)->player.coin);
		return (1);
	}
	if (c == 'C')
		return (ft_movec(map, new_y, new_x));
	if (c == 'E')
	{
		(*map)->player.steps++;
		ft_printf("Steps: %i Coins: %i\n", (*map)->player.steps,
			(*map)->player.coin);
		ft_winner(map);
	}
	return (0);
}

static void	ft_move_y(t_map **map, int y)
{
	int	new_y;
	int	new_x;

	new_y = (*map)->player.y + y;
	new_x = (*map)->player.x;
	if (ft_move0(map, new_y, new_x))
		(*map)->player.y = new_y;
}

static void	ft_move_x(t_map **map, int x)
{
	int	new_y;
	int	new_x;

	new_y = (*map)->player.y;
	new_x = (*map)->player.x + x;
	if (ft_move0(map, new_y, new_x))
		(*map)->player.x = new_x;
}

int	ft_hook(int keycode, t_map **map)
{
	if (keycode == ESC)
		ft_closemlx(map);
	if (keycode == UP || keycode == W)
		ft_move_y(map, -1);
	if (keycode == DOWN || keycode == S)
		ft_move_y(map, 1);
	if (keycode == LEFT || keycode == A)
		ft_move_x(map, -1);
	if (keycode == RIGHT || keycode == D)
		ft_move_x(map, 1);
	ft_print_img(map);
	return (0);
}
