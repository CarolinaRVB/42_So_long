/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:22:58 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:29:19 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memset() function fills the first n bytes of the memory area
// pointed to by s with the constant byte c.
#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = c;
		i++;
		n--;
	}
	return (str);
}
