/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:04:45 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:27:03 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char ch, va_list args)
{
	if (ch == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (ch == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (ch == 'd' || ch == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (ch == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (ch == '%')
		return (ft_putchar('%'));
	else if (ch == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 'x'));
	else if (ch == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'X'));
	else if (ch == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	return (-1);
}
