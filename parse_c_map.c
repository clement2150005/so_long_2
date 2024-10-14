/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_c_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:58:28 by arenilla          #+#    #+#             */
/*   Updated: 2024/07/24 11:58:30 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_lenmap(char *line)
{
	int	i;

	i = 0;
	if (line == NULL)
		return (0);
	while (line[i] && line[i] != '\n')
	{
		i++;
	}
	return (i);
}

static void	ft_parse_closed2(t_map **map)
{
	int	i;
	int	j;

	j = 0;
	i = (*map)->width - 1;
	while ((*map)->map[j] && j < (*map)->height)
	{
		if ((*map)->map[j][0] != '1')
			ft_msg_efree("Map is not closed", *map);
		j++;
	}
	j = 0;
	while ((*map)->map[j] && j < (*map)->height)
	{
		if ((*map)->map[j][i] != '1')
			ft_msg_efree("Map is not closed", *map);
		j++;
	}
}

void	ft_parse_closed(t_map **map)
{
	int	i;
	int	j;

	i = 0;
	j = (*map)->height - 1;
	while ((*map)->map[0][i] && i < (*map)->width)
	{
		if ((*map)->map[0][i] != '1' && (*map)->map[0][i] != '\n')
			ft_msg_efree("Map is not closed", *map);
		i++;
	}
	i = 0;
	while ((*map)->map[j] && i < (*map)->width)
	{
		if ((*map)->map[j][i] != '1' && (*map)->map[j][i] != '\n')
			ft_msg_efree("Map is not closed", *map);
		i++;
	}
	ft_parse_closed2(map);
}

static void	ft_parse_c2(t_map **map, int j, int i)
{
	if ((*map)->map[j][i] != '1' && (*map)->map[j][i] != '0' &&
		(*map)->map[j][i] != 'P' && (*map)->map[j][i] != 'E' &&
		(*map)->map[j][i] != 'C' && (*map)->map[j][i] != '\n')
		ft_msg_efree("Map is not valid", *map);
	if ((*map)->map[j][i] == 'P')
	{
		(*map)->player.x = i;
		(*map)->player.y = j;
		(*map)->nposition++;
	}
	if ((*map)->map[j][i] == 'E')
		(*map)->nexit++;
	if ((*map)->map[j][i] == 'C')
		(*map)->ncollectable++;
}

void	ft_parse_c(t_map **map)
{
	unsigned long	j;
	unsigned long	i;

	j = 0;
	i = 0;
	while ((*map)->map[j] != NULL)
	{
		i = 0;
		while ((*map)->map[j][i] && (*map)->map[j][i] != '\n')
		{
			ft_parse_c2(map, j, i);
			i++;
		}
		j++;
	}
	if ((*map)->nposition != 1)
		ft_msg_efree("Wrong initial map position", *map);
	if ((*map)->nexit != 1)
		ft_msg_efree("Wrong exit position", *map);
	if ((*map)->ncollectable < 1)
		ft_msg_efree("Wrong number of coins", *map);
}
