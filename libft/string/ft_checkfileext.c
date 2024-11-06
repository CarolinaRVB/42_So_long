/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfileext.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:49:10 by crebelo-          #+#    #+#             */
/*   Updated: 2023/12/08 21:07:02 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_checkfileext(char *filename, char *extension)
{
	char	sep;
	int		beginning;

	if (!filename || !extension)
		return (1);
	sep = extension[0];
	beginning = ft_strlen(filename) - ft_strlen(extension);
	if (ft_strnstr(&filename[beginning], extension, ft_strlen(extension)) == 0)
		return (1);
	return (0);
}
