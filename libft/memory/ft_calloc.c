/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:19:05 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/18 10:56:24 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory for an array of nmemb elements of size bytes 
// each and returns a
// pointer to the allocated memory. The memory is set to zero.
#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero (p, nmemb * size);
	return (p);
}
