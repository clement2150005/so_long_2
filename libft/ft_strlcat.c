/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:23:11 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 12:55:50 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] != '\0' && ((dstlen + 1) < dstsize))
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return ((dstlen - i) + srclen);
}

/*int	main(void)
{
	char		*dst = NULL;
	const char	*src = ", tu";
	size_t		dstsize;

	dstsize = 0;
//	printf ("original: %lu\n", strlcat(dst, src, dstsize));
	printf ("propia: %lu\n", ft_strlcat(dst, src, dstsize));
	printf ("%s\n", dst);
	return (0);
}*/
