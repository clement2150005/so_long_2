/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:58:07 by arenilla          #+#    #+#             */
/*   Updated: 2024/10/14 19:19:33 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_map	*map;

	if (argc != 2)
	{
		ft_printf("You must run so_long with a map\n");
		return (1);
	}
	map = ft_calloc(sizeof(t_map), 1);
	if (!map)
		ft_printf("Memory allocation failed for t_map at the beginning\n");
	ft_parse_file(argv, &map);
	ft_init_game(&map);
	system("leaks so_long");
	return (0);
}
