/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:12:40 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 10:38:59 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	character;

	character = c;
	i = ft_strlen(s);
	if (character == '\0')
		return ((char *)(&s[i]));
	while (i != -1)
	{
		if (character == s[i])
			return ((char *)(&s[i]));
		else
			i--;
	}
	return (0);
}

/*int	main(void)
{
	const char	*s;
	int			c;

	s = "";
	c = 'a';
	printf("original: %s\n", strrchr(s, c));
	printf("propia: %s\n", ft_strrchr(s, c));
	return (0);
}*/
