/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:25:25 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:25 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies and concatenates strings. Take full 
// size of buffer and garantee null terminated
// result as long as there is one byte free in dest.
// Both src and dest must be null terminated.
// Returns the total length of the string it tried to create
// if strlcat() traverses size characters without
// finding a NUL, the length of the string 
// is considered to be size and the destination string 
// will not be NUL-terminated 
// (since there was no space for the NUL). 
#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(dst);
	b = 0;
	if (ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	while (src[b] != '\0' && size > a + 1)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}
