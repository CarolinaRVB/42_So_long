/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:26:34 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:56 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the substring of the given string at the 
// given start position with the 
// given length (or smaller if the length of the original string is less than 
// start + length, or length is bigger than MAXSTRINGLEN).
#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		j;

	if (!s || len == 0 || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (sub)
	{
		j = 0;
		while (s[j] != '\0' && j < (int)len)
		{
			sub[j] = (char)s[start];
			start++;
			j++;
		}
		return (sub);
	}
	return (NULL);
}
