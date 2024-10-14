/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:10:50 by arenilla          #+#    #+#             */
/*   Updated: 2024/01/31 14:32:59 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;

	c = 122;
	printf("original: %d\n", isalnum(c));
	printf("propia: %d\n", ft_isalnum(c));
	return (0);
}*/
