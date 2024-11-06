/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:26:34 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:19 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Joins two strings
#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
	sjoin = (char *)ft_calloc(s1len + s2len + 1, sizeof(char));
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
	return (0);
}
