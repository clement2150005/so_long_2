/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:47:44 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 10:30:14 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}

/*int	main(void)
{
	int	c;

	c = -1;
	c = ft_tolower(c);
//	c = tolower(c);
	write(1, &c, 1);
	write(1, " ", 1);
	return (0);
}*/
