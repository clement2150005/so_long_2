/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:08:53 by arenilla          #+#    #+#             */
/*   Updated: 2024/07/25 16:08:56 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_map(t_map *map)
{
	int	j;

	j = 0;
	if (map->map != NULL)
	{
		while (map->map[j] != NULL)
		{
			free(map->map[j]);
			j++;
		}
		free(map->map);
	}
	free(map);
	map = NULL;
}

void	ft_free_test(char **test)

{
	int	j;

	j = 0;
	while (test[j] != NULL)
	{
		free(test[j]);
		j++;
	}
	free(test);
	test = NULL;
}
