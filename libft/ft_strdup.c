/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:33:02 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/27 08:00:22 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scpy;
	size_t	size;
	size_t	j;

	size = ft_strlen(s1);
	scpy = (char *) malloc(size + 1);
	if (!scpy)
		return (0);
	j = 0;
	while (s1[j])
	{
		scpy[j] = s1[j];
		j++;
	}
	scpy[j] = '\0';
	return (scpy);
}

/*int	main(void)
{
	const char	*s1;
	char		*scpy_mine;
	char		*scpy_original;

	s1 = "hola";
	scpy_mine = ft_strdup(s1);
	scpy_original = strdup(s1);
	printf("original: %s\n", scpy_original);
	printf("propia: %s\n", scpy_mine);
	free(scpy_original);
	free(scpy_mine);
	return (0);
}*/
