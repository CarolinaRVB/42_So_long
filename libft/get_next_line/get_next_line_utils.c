/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:59:34 by crebelo-          #+#    #+#             */
/*   Updated: 2023/05/14 21:59:34 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	size_t	s1len;
	size_t	s2len;
	int		i;
	int		j;
	char	*sjoin;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	j = 0;
	i = 0;
	sjoin = ft_calloc(s1len + s2len + 1, sizeof(char));
	if (sjoin)
	{
		while (s1[i] != '\0')
		{
			sjoin[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			sjoin[i++] = s2[j++];
		return (sjoin);
	}
	free(sjoin);
	return (NULL);
}

int	ft_findnl(char *stash)
{
	ssize_t		i;

	if (stash == NULL)
		return (0);
	i = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	createstash(char **stash, char *buff)
{
	char	*tmp;

	if (*stash == NULL)
	{
		*stash = ft_gnl_strjoin("", buff);
		return ;
	}
	tmp = ft_gnl_strjoin(*stash, buff);
	free(*stash);
	*stash = tmp;
}
