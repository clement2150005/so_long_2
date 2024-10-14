/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:11:25 by arenilla          #+#    #+#             */
/*   Updated: 2024/01/31 14:33:27 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;

	c = 0177;
	printf("original %d\n", isascii(c));
	printf("propia %d\n", ft_isascii(c));
	return (0);
}*/
