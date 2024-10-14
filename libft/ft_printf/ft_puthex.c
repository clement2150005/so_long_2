/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:40:59 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:19:09 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cond15and10(unsigned long n, char ch, int i, int j)
{
	char	number;

	if (n > 15)
	{
		j = ft_puthex((n / 16), ch);
		if (j == -1)
			return (-1);
		i = i + j;
		j = ft_puthex((n % 16), ch);
		if (j == -1)
			return (-1);
		i = i + j;
	}
	if (n < 10)
	{
		number = n + 48;
		j = write(1, &number, 1);
		if (j == -1)
			return (-1);
		i = i + j;
	}
	return (i);
}

static int	ft_condhex(unsigned long n, char ch, int i, int j)
{
	char	number;

	if (n > 15 || n < 10)
	{
		i = ft_cond15and10(n, ch, i, j);
		if (i == -1)
			return (-1);
	}
	if (n > 9 && n < 16)
	{
		n = n - 10;
		if (ch == 'x')
			number = n + 97;
		if (ch == 'X')
			number = n + 65;
		j = write(1, &number, 1);
		if (j == -1)
			return (-1);
		i = i + j;
	}
	return (i);
}

int	ft_puthex(unsigned long n, char ch)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n == 0)
	{
		j = write(1, "0", 1);
		if (j == -1)
			return (-1);
		i = i + j;
	}
	else
	{
		j = ft_condhex(n, ch, i, j);
		if (j == -1)
			return (-1);
		i = j;
	}
	return (i);
}

/*int	main(void)
{
	int	i;
	int	n;

	n = 2147483647;
	i = ft_puthex(n, 'x');
	printf("\n%d", i);
	return (0);
}*/
