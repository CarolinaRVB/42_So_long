/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:25:42 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:29 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strlcpy() function copies up to size - 1 characters 
// from the NUL-terminated string 
// src to dst, NUL-terminating the result. The strlcat() 
// function appends the NUL-terminated 
// string src to the end of dst. It will append 
// at most size - strlen(dst) - 1 bytes, 
// NUL-terminating the result.
#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
