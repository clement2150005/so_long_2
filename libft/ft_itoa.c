/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:45:19 by arenilla          #+#    #+#             */
/*   Updated: 2024/03/05 12:03:36 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	ft_number(int n)
{
	int	number;

	if (n < 0)
		number = n * -1;
	else
		number = n;
	return (number);
}

static size_t	ft_numlen(int n)
{
	size_t	i;
	int		number;

	i = 1;
	number = ft_number(n);
	if (n < 0)
		i++;
	while (number > 9)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

static char	*ft_loopitoa(char *str, int n, size_t len, int number)
{
	if (n < 0)
		str[0] = '-';
	while (number > 0)
	{
		if (number > 9)
		{
			str[len] = (number % 10) + 48;
			number = number / 10;
			len--;
		}
		if (number < 10)
		{
			str[len] = number + 48;
			break ;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		number;

	len = ft_numlen(n);
	number = ft_number(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	len--;
	if (n == 0)
	{
		str[len] = '0';
		return (str);
	}
	str = ft_loopitoa(str, n, len, number);
	return (str);
}

/*int	main(void)
{
	char	*stritoa;

	stritoa = ft_itoa(23465);
	printf("%s\n", stritoa);
	free(stritoa);
	return (0);
}*/
