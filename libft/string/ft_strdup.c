/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:24:58 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:12 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strdup() function returns a pointer to a new string which is
// a duplicate of the string s.  Memory for the new string is
// obtained with malloc(3)
#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(s);
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
