/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:37:22 by crebelo-          #+#    #+#             */
/*   Updated: 2023/04/28 16:37:22 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_printstr(char c, va_list args, size_t *len)
{
	if (c == 'c')
		ft_printf_putchar_fd((va_arg(args, int)), 1, len);
	if (c == 's')
		ft_printf_putstr_fd(va_arg(args, char *), 1, len);
	if (c == '%')
		ft_printf_putchar_fd('%', 1, len);
}

static void	ft_printint(char c, va_list args, size_t *len)
{
	if (c == 'd' || c == 'i')
		ft_printf_putnbr_fd(va_arg(args, int), 1, len);
	else
		ft_putunbr(va_arg(args, unsigned int), len);
}

static void	ft_printh(char c, va_list args, size_t *len)
{
	char	*lbase;
	char	*hbase;

	lbase = "0123456789abcdef";
	hbase = "0123456789ABCDEF";
	if (c == 'x')
		ft_putnbr_hex(va_arg(args, unsigned int), lbase, len);
	else if (c == 'X')
		ft_putnbr_hex(va_arg(args, unsigned int), hbase, len);
	else
		ft_putptr_hex(va_arg(args, void *), lbase, len);
}

static void	ft_checkformat(char c, va_list args, size_t *len)
{
	if (c == 'c' || c == 's' || c == '%')
		ft_printstr(c, args, len);
	if (c == 'd' || c == 'i' || c == 'u')
		ft_printint(c, args, len);
	if (c == 'p' || c == 'x' || c == 'X')
		ft_printh(c, args, len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	size_t	len;
	va_list	args;

	i = 0;
	len = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			ft_printf_putchar_fd(format[i], 1, &len);
		else
		{
			i++;
			ft_checkformat(format[i], args, &len);
		}
		i++;
	}
	va_end(args);
	return (len);
}
