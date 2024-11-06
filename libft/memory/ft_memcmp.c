/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:22:10 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:29:08 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcmp() function compares the first n bytes (each
// interpreted as unsigned char) of the memory areas s1 and s2.
// The memcmp() function returns an integer less than, equal to, or
// greater than zero if the first n bytes of s1 is found,
// respectively, to be less than, to match, or be greater than the
// first n bytes of s2.

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while ((unsigned char)str1[i] == (unsigned char)str2[i] && (i < n - 1))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
