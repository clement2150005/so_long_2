/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:09:16 by arenilla          #+#    #+#             */
/*   Updated: 2024/03/05 12:19:11 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*static char	ft_2toupper(unsigned int i, char c)
{
	if (i % 2 != 0)
	{
		if (c > 96 && c < 123)
			c = c - 32;
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	if (!f)
		return ((char *)s);
	if (*s == 0)
	{
		str = ft_strdup(s);
		return (str);
	}
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*str;

	str = ft_strmapi("hola", ft_2toupper);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
