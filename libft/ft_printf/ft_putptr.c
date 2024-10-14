/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:17:21 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:44:41 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	int	i;
	int	j;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	i = write(1, "0x", 2);
	if (i == -1)
		return (-1);
	j = ft_puthex(ptr, 'x');
	if (j == -1)
		return (-1);
	return (i + j);
}

/*int	main(void)
{
	int	i;
	void	*pointer;

//	pointer = (void *)malloc(1);
	i = ft_putptr(pointer);
	write (1, "\n", 1);
	printf("%d", i);
	return (0);
}*/
