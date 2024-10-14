/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:10:19 by arenilla          #+#    #+#             */
/*   Updated: 2024/01/31 14:33:43 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;

	c = 42;
	printf("original: %d\n", isdigit(c));
	printf("propia: %d\n", ft_isdigit(c));
	return (0);
}*/
