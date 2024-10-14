/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:08:49 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 11:26:40 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char			dst[10];
	const char		*src;
	size_t	dstsize;

	src = "hola";
	dstsize = 5;
	printf ("original: %lu\n", strlcpy(dst, src, dstsize));
	printf ("propia: %lu\n", ft_strlcpy(dst, src, dstsize));
	return (0);
}*/
