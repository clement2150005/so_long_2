/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:24:23 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/15 11:12:36 by arenilla         ###   ########.fr       */
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

char	*get_next_line_bonus(int fd)
{
	static char	*buffer[1024];
	char		*oneline;

	if (fd < 0 || BUFFER_SIZE < 1 || fd >= 1024)
		return (NULL);
	if (!buffer[fd])
	{
		buffer[fd] = ft_calloc(1, 1);
		if (!buffer[fd])
			return (NULL);
	}
	buffer[fd] = ft_read(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	oneline = ft_newline(buffer[fd]);
	buffer[fd] = ft_nextbuf(buffer[fd]);
	return (oneline);
}

/*int main()
{
    int		fd1;
    int		fd2;
    int		fd3;
    char	*file1;
    char	*file2;
    char	*file3;

//reading some fd
    fd1 = open("prueba.txt", O_RDONLY);
    fd2 = open("prueba2.txt", O_RDONLY);
    fd3 = open("prueba3.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
	{
		printf("-1");
		return (1);
	}
    while (1) 
	{
        file1 = get_next_line(fd1);
        file2 = get_next_line(fd2);
        file3 = get_next_line(fd3);

        if (file1 == NULL && file2 == NULL && file3 == NULL) {
            break;
        }

        if (file1) {
            printf("%s", file1);
            free(file1);
        } else {
            printf("NULL\n");
        }

        if (file2) {
            printf("%s", file2);
            free(file2);
        } else {
            printf("NULL\n");
        }

        if (file3) {
            printf("%s", file3);
            free(file3);
        } else {
            printf("NULL\n");
        }
    }
    close(fd1);
    close(fd2);
    close(fd3);
	system("leaks a.out");
    return (0);
}*/
