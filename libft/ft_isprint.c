/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:12:08 by arenilla          #+#    #+#             */
/*   Updated: 2024/01/31 14:34:07 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;

	c = 127;
	printf("original: %d\n", isprint(c));
	printf("propia: %d\n", ft_isprint(c));
	return (0);
}*/
