/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:20:28 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/23 08:18:48 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	number;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		number = (n % 10) + 48;
		ft_putchar_fd(number, fd);
	}
}

/*int	main(void)
{
	int	n;
	int	fd;
	
	n = -4562;
	fd = open("prueba_fd_nbr", O_RDWR | O_CREAT, 0644);
	ft_putnbr_fd(n, fd);
	close(fd);
	return(0);
}*/
