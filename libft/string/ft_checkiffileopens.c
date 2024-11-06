/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkiffileopens.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:25 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/30 18:51:25 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	checkiffileopens(char *file, int flag)
{
	int	fd;

	fd = open(file, flag);
	if (!fd || fd == -1)
		return (1);
	else
	{
		close(fd);
		return (0);
	}
}
