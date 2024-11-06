/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmpchrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:47:43 by crebelo-          #+#    #+#             */
/*   Updated: 2023/12/07 17:47:43 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	strcmpchrs(char **str, char *chrs, int height)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < height)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			k = 0;
			while (str[i][j] != chrs[k] && chrs[k] != '\0')
				k++;
			if (chrs[k] == '\0')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
