/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:13:25 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/02 10:53:58 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bytestr;
	size_t			i;

	bytestr = b;
	i = 0;
	while (i < len)
	{
		bytestr[i] = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	b[4];
	int		c;
	size_t	len;

	b[0] = 'H';
	b[1] = 'o';
	b[2] = 'l';
	b[3] = 'a';
	c = 48;
	len = 3;
	printf("original: %s\n", (char *)memset(b, c, len));
	printf("propia: %s\n", ft_memset(b, c, len));
	return (0);
}*/
