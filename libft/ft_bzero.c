/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:47:30 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/02 11:00:47 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bytestr;
	size_t			i;

	bytestr = s;
	i = 0;
	while (i < n)
	{
		bytestr[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	s[4];
	size_t	n;
	size_t	i;

	s[0] = 'H';
	s[1] = 'o';
	s[2] = 'l';
	s[3] = 'a';
	n = 2;
	i = 0;
	bzero(s, n);
	ft_bzero(s, n);
	while (s[i] == '\0')
	{
		printf("%zu", i + 1);
		i++;
	}
	while (s[i] != '\0')
	{
		printf("%c", s[i]);
		i++;
	}
	return (0);
}*/
