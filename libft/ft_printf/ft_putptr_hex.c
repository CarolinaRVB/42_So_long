/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:12:25 by crebelo-          #+#    #+#             */
/*   Updated: 2023/05/04 12:12:25 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putptr_hex(void *ptr, char *base, size_t *len)
{
	unsigned long	p;

	if (ptr == NULL)
	{
		ft_printf_putstr_fd("(nil)", 1, len);
		return ;
	}
	ft_printf_putstr_fd("0x", 1, len);
	p = (unsigned long)ptr;
	ft_put_hex(p, base, len);
}

void	ft_put_hex(unsigned long n, char *base, size_t *len)
{
	if (n == 0)
	{
		ft_printf_putchar_fd('0', 1, len);
		return ;
	}
	while (n >= 16)
	{
		ft_put_hex(n / 16, base, len);
		n %= 16;
	}
	ft_printf_putchar_fd((base[n]), 1, len);
}
