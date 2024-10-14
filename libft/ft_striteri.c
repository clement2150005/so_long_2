/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:43:46 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 10:26:26 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*static void ft_addi(unsigned int i, char *c)
{
	*c = *c + i;
}*/

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || *s == 0)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	*s = "hola";

	ft_striteri(s, ft_addi);
	printf("%s\n", s);
	return (0);
}*/
