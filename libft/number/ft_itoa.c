/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:45:42 by crebelo-          #+#    #+#             */
/*   Updated: 2023/04/23 22:45:42 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_sign(int n)
{
	int	sign;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	return (sign);
}

static int	ft_count(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	int		sign;
	char	*str;

	sign = ft_sign(n);
	count = ft_count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)ft_calloc((count + sign + 1), sizeof(char));
	if (str && sign == 1)
	{
		str[0] = '-';
		n = -n;
		count++;
	}
	while (str && n != 0)
	{
		str[count-- - 1] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
