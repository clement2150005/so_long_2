/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:24:23 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 17:29:55 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

static char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	lenght;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	lenght = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (0);
	while (s1[i] != '\0')
		str[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	free(s1);
	return (str);
}

static char	*ft_read(int fd, char *totalbuf)
{
	char	*cpybuf;
	int		nread;

	cpybuf = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!cpybuf)
		return (NULL);
	nread = 1;
	while (nread > 0)
	{
		nread = read(fd, cpybuf, BUFFER_SIZE);
		if (nread == -1)
		{
			free(cpybuf);
			free(totalbuf);
			return (NULL);
		}
		cpybuf[nread] = '\0';
		totalbuf = ft_strjoin_gnl(totalbuf, cpybuf);
		if (ft_strchr(totalbuf, '\n'))
			break ;
	}
	free(cpybuf);
	return (totalbuf);
}

static char	*ft_newline(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 1, sizeof(char));
	line = ft_memmove(line, buffer, i);
	if (buffer[i] != '\0' && buffer[i] == '\n')
		line = ft_strjoin_gnl(line, "\n");
	return (line);
}

static char	*ft_nextbuf(char *buffer)
{
	int		len;
	char	*nextb;

	len = 0;
	while (buffer[len] != '\0' && buffer[len] != '\n')
		len++;
	if (buffer[len] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	nextb = ft_calloc((ft_strlen(buffer) - len + 1), sizeof(char));
	if (!nextb)
	{
		free(buffer);
		return (NULL);
	}
	len++;
	nextb = ft_memmove(nextb, &buffer[len], (ft_strlen(buffer) - len));
	free(buffer);
	return (nextb);
}

char	*get_next_line(int fd, int flag)
{
	static char	*buffer;
	char		*oneline;

	if (flag == 1)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	if (!buffer)
	{
		buffer = ft_calloc(1, 1);
		if (!buffer)
			return (NULL);
	}
	buffer = ft_read(fd, buffer);
	if (!buffer)
		return (NULL);
	oneline = ft_newline(buffer);
	buffer = ft_nextbuf(buffer);
	return (oneline);
}

/*int main()
{
    int		fd;
    char	*line;

    fd = open("prueba.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("-1");
		return (1);
	}
    while (1)
	{
		line = get_next_line(fd, 0);
		if (!line)
			break;
		printf("%s", line);
        free(line);
    }
    close(fd);
	system("leaks a.out");
    return (0);
}*/
