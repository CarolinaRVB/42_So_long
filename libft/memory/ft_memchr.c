/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:21:30 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:29:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memchr() function scans the initial n bytes of the memory
// area pointed to by s for the first instance of c.
// Return pointer to the matching byte or null if not found. 
#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		a;
	size_t		i;

	a = (char)c;
	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
