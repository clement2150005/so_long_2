/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:25:41 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 10:32:47 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}

/*int	main(void)
{
	int	c;

	c = 'r';
	c = ft_toupper(c);
	c = toupper(c);
	write(1, &c, 1);
	write(1, " ", 1);
	return (0);
}*/
