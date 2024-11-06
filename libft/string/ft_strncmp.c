/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:26:08 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:40 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strncmp() only compares the first (at most) 
// n bytes of s1 and s2.
// strncmp() terminates after n characters OR after 
// hitting a '\0' character, whichever 
// comes first. memcmp() does not terminate if it 
// encounters a '\0' character
#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
