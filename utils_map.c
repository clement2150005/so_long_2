/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:58:56 by arenilla          #+#    #+#             */
/*   Updated: 2024/07/24 11:58:57 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_cpy_map(int fd, t_map **map)
{
	int	i;

	i = 0;
	while (i < (*map)->height)
	{
		(*map)->map[i] = get_next_line(fd, 0);
		i++;
	}
	get_next_line(fd, 1);
	close(fd);
}

int	ft_nlines(char *argmap, t_map *map)
{
	char	*line;
	int		fd;
	int		nlines;

	nlines = 0;
	fd = open(argmap, O_RDONLY);
	if (fd < 0)
		ft_msg_error("Error opening file", map);
	line = get_next_line(fd, 0);
	while (line != NULL)
	{
		nlines++;
		free(line);
		line = get_next_line(fd, 0);
	}
	if (nlines == 0)
	{
		close(fd);
		ft_msg_error("Empty map", map);
	}
	close(fd);
	return (nlines);
}

void	ft_find_exit(t_map *map)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (map->map[j] != NULL)
	{
		i = 0;
		while (map->map[j][i] && map->map[j][i] != '\n')
		{
			if (map->map[j][i] == 'E')
			{
				map->x_exit = i;
				map->y_exit = j;
				map->map[j][i] = '0';
				return ;
			}
			i++;
		}
		j++;
	}
}

void	ft_find_position(t_map *map)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (map->map[j])
	{
		i = 0;
		while (map->map[j][i] && map->map[j][i] != '\n')
		{
			if (map->map[j][i] == 'P')
			{
				map->player.x = i;
				map->player.y = j;
				return ;
			}
			i++;
		}
		j++;
	}
}

char	**ft_cpy_test(t_map *map, char **test)
{
	int	i;

	i = 0;
	while (map->map[i] != NULL)
	{
		test[i] = ft_strdup(map->map[i]);
		if (test[i] == NULL)
		{
			ft_free_test(test);
			ft_msg_efree("Memory failure", map);
		}
		i++;
	}
	test[i] = NULL;
	return (test);
}
