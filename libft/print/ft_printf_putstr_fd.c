/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:26:34 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:29:45 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_printf_putstr_fd(char *s, int fd, size_t *len)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
		(*len)++;
	}
}
