/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:24:21 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:09 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() function returns a pointer to the first occurrence
// of the character c in the string s.
// If you're dealing with strings, then use strchr() . 
// If you have a finite-size, non-terminated buffer, then use memchr()
#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
