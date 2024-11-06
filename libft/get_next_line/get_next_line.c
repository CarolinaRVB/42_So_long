/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:50:55 by crebelo-          #+#    #+#             */
/*   Updated: 2023/05/12 11:50:55 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_next_line(int fd)
{
	static char		*stash[1024];
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_read(&stash[fd], fd);
	if (!stash[fd])
		return (NULL);
	ft_createline(&line, stash[fd]);
	ft_clean(&stash[fd]);
	if (line[0] == '\0')
	{
		free(stash[fd]);
		stash[fd] = NULL;
		free(line);
		line = NULL;
	}
	return (line);
}

void	ft_read(char **stash, int fd)
{
	char	*buff;
	ssize_t	n;

	buff = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buff)
		return ;
	n = 1;
	while (n != 0 && !ft_findnl(*stash))
	{
		n = read(fd, buff, BUFFER_SIZE);
		if (n == -1)
		{
			free(buff);
			free(*stash);
			*stash = NULL;
			return ;
		}
		buff[n] = '\0';
		createstash(stash, buff);
	}
	free(buff);
}

void	ft_createline(char **line, char *stash)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	*line = ft_calloc((i + 1), sizeof(char));
	if (!*line)
		return ;
	while (j < i)
	{
		(*line)[j] = stash[j];
		j++;
	}
}

void	ft_clean(char **stash)
{
	size_t	new_line;
	char	*temp;
	size_t	len;
	int		i;

	new_line = 0;
	while ((*stash)[new_line] != '\n' && (*stash)[new_line] != '\0')
		++new_line;
	if ((*stash)[new_line] == '\n')
		new_line++;
	len = ft_strlen(*stash) - new_line;
	temp = malloc(sizeof(char) * (len + 1));
	if (!temp || len == 0)
	{
		free(temp);
		free(*stash);
		*stash = NULL;
		return ;
	}
	i = 0;
	while ((*stash)[new_line] != '\0')
		temp[i++] = (*stash)[new_line++];
	temp[i] = '\0';
	free(*stash);
	*stash = temp;
}
