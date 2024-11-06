/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:22:23 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:29:12 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to
// memory area dest.  The memory areas must not overlap.
// Returns point to dest 
#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	if (dest == NULL && src == NULL)
		return (0);
	s = (char *) src;
	d = (char *) dest;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
