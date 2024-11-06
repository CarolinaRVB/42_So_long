/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:22:45 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:29:16 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove() function copies n bytes from memory area src to
// memory area dest.  The memory areas may overlap
#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;

	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*((char *)(dest + i)) = *((char *)(src + i));
			i--;
		}
	}
	else
	{
		i = 0;
		while ((int)n > i)
		{
			*((char *)(dest + i)) = *((char *)(src + i));
			i++;
		}
	}
	return (dest);
}
