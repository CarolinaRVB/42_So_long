/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:00:53 by crebelo-          #+#    #+#             */
/*   Updated: 2023/05/04 10:00:53 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_hex(unsigned int n, char *base, size_t *len)
{
	if (n == 0)
	{
		ft_printf_putchar_fd('0', 1, len);
		return ;
	}
	while (n >= 16)
	{
		ft_putnbr_hex(n / 16, base, len);
		n %= 16;
	}
	ft_printf_putchar_fd((base[n]), 1, len);
}
