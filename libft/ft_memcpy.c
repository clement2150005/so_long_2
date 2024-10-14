/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:04 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 12:58:34 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*bytedst;
	const unsigned char	*bytesrc;

	bytedst = dst;
	bytesrc = src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		bytedst[i] = bytesrc[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char		dst[] = "";
	const char	src[] = "";
	size_t		n;

	n = 11;
	printf("antes: %s\n", dst);
//	memcpy(((void *)0), ((void *)0), 3);
//	printf("despues (original): %s\n", dst);
	ft_memcpy(dst, src, n);
	printf("despues (propia): %s\n", dst);
	return (0);
}*/
