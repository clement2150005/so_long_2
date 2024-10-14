/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:34:07 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 13:01:33 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((n < 1) || (*s1 == '\0' && *s2 == '\0'))
		return (0);
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
}

/*int	main(void)
{
	const char	*s1;
	const char	*s2;
	size_t		n;

	s1 = "";
	s2 = "";
	n = 2;
//	printf("original: %d\n", strncmp(s1, s2, n));
	printf("propia: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
