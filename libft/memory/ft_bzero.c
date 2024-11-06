/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:20:01 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:28:57 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// The bzero() function erases the data 
// in the n bytes of the memory 
// starting at the location pointed to 
// by s, by writing zeros (bytes containing '\0') 
// to that area. Call memset function with s, '\0', n
void	ft_bzero(void *s, size_t n)
{
	unsigned char			*str;
	size_t					i;

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}
