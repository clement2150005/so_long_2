/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:53:25 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 08:10:48 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] > 47 && str[i] < 58))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	result = result * sign;
	return (result);
}

/*int	main(void)
{
	const char	*str;

	str = "       -00938fff48472hdkdf90";
	printf("original: %d\n", atoi(str));
	printf("propia: %d\n", ft_atoi(str));
	return (0);
}*/
