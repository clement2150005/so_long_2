/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:05:57 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 11:00:33 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *) &haystack[i]);
	while ((i < len) && haystack[i] && needle[j] && (i + j) < len)
	{
		if (needle[j] == haystack[i + j])
			j++;
		else
		{
			j = 0;
			i++;
		}
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
	}
	return (0);
}

/*int	main(void)
{
	const char		*str;
	const char		*needle;
	size_t	len;

	str = "aaabcabcd";
	needle = "aabc";
	len = -1;
//	printf("original: %s\n", strnstr(str, needle, len));
	printf("propia: %s\n", ft_strnstr(str, needle, len));
	return (0);
}*/
