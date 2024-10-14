/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:19:27 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/27 12:39:24 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char	*s;
	int		fd;
	
	s = "hola, mundano";
	fd = open("prueba_fd_end", O_RDWR | O_CREAT, 0644);
	ft_putendl_fd(s, fd);
	close(fd);
	return(0);
}*/
