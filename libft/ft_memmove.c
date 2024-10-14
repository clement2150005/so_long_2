/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:57:53 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 12:58:57 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*bytedst;
	const unsigned char	*bytesrc;

	bytedst = dst;
	bytesrc = src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		if (dst >= src)
		{
			bytedst[len - 1] = bytesrc[len - 1];
			len--;
		}
		if (dst < src)
		{
			bytedst[i] = bytesrc[i];
			i++;
		}
	}
	dst = bytedst;
	return (dst);
}

/*int	main(void)
{
	char		dst[5] = "turur";
	const char	src[4] = "hola";
	size_t		len = 5;

	memmove(dst, src, len);
	printf("%s\n", dst);
	ft_memmove(dst, src, len);
	printf("%s\n", dst);
	return (0);
}*/
