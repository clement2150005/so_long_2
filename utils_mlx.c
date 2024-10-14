/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_mlx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:17:13 by arenilla          #+#    #+#             */
/*   Updated: 2024/10/07 10:17:17 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_closemlx(t_map **map)
{
	if ((*map)->images.player)
		mlx_destroy_image((*map)->mlx, (*map)->images.player);
	if ((*map)->images.wall)
		mlx_destroy_image((*map)->mlx, (*map)->images.wall);
	if ((*map)->images.floor)
		mlx_destroy_image((*map)->mlx, (*map)->images.floor);
	if ((*map)->images.exit)
		mlx_destroy_image((*map)->mlx, (*map)->images.exit);
	if ((*map)->images.coin)
		mlx_destroy_image((*map)->mlx, (*map)->images.coin);
	mlx_destroy_window((*map)->mlx, (*map)->window);
	ft_printf("%s\n", "Come back soon!");
	mlx_destroy_display((*map)->mlx);
	mlx_loop_end((*map)->mlx);
	free((*map)->mlx);
	(*map)->mlx = NULL;
	ft_free_map(*map);
	exit(0);
	return (0);
}

void	ft_winner(t_map **map)
{
	if ((*map)->images.player)
		mlx_destroy_image((*map)->mlx, (*map)->images.player);
	if ((*map)->images.wall)
		mlx_destroy_image((*map)->mlx, (*map)->images.wall);
	if ((*map)->images.floor)
		mlx_destroy_image((*map)->mlx, (*map)->images.floor);
	if ((*map)->images.exit)
		mlx_destroy_image((*map)->mlx, (*map)->images.exit);
	if ((*map)->images.coin)
		mlx_destroy_image((*map)->mlx, (*map)->images.coin);
	mlx_destroy_window((*map)->mlx, (*map)->window);
	ft_printf("%s\n", "You win!");
	mlx_destroy_display((*map)->mlx);
	mlx_loop_end((*map)->mlx);
	free((*map)->mlx);
	(*map)->mlx = NULL;
	ft_free_map(*map);
	exit(0);
}
