/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:53:14 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/02 10:53:06 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		if (str1[i] == str2[i])
			i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*s1;
	const char	*s2;
	size_t		n;

	s1 = "hola, caracola";
	s2 = "hola, caracola";
	n = 0;
	printf("original: %d\n", memcmp(s1, s2, n));
	printf("propia: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}*/
