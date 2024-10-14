/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:59:20 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:20:39 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (str[i] != '\0')
	{
		if (write (1, &str[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char i;

	i = ft_putstr("hola") + 48;
	write(1, &i, 2);
	return 0;
}*/
