/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:14:19 by arenilla          #+#    #+#             */
/*   Updated: 2024/03/05 10:58:19 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	lenght;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	lenght = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*int	main(void)
{
	char const	*s1;
	char const	*s2;
	char		*joined;

	s1 = "hola";
	s2 = "";
	joined = ft_strjoin(s1, s2);
	printf("%s\n", joined);
	free(joined);
	return (0);
}*/
