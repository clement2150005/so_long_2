/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:13:55 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 10:46:03 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*byte_s;
	unsigned char		newc;
	size_t				i;

	byte_s = s;
	newc = c;
	i = 0;
	while (i < n)
	{
		if (byte_s[i] == newc)
			return ((void *)(s + i));
		else
			i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*s;
	int			c;
	size_t		n;

	s = "la vaca lola";
	c = '0';
	n = 4;
	printf("original: %s\n", memchr(s, c, n));
	printf("propia: %s\n", ft_memchr(s, c, n));
	return (0);
}*/
