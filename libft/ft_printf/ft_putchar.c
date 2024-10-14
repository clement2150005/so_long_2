/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:42:41 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:18:40 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

/*int	main(void)
{
	char i;

	i = ft_putchar('a') + 48;
	write(1, &i, 1);
	return(0);
}*/
