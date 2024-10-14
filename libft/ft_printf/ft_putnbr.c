/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:25:56 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:19:46 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n);
	if (!str)
		return (-1);
	i = ft_putstr(str);
	free(str);
	return (i);
}
