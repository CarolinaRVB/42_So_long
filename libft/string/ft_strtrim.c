/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:26:34 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:53 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		last;

	i = 0;
	last = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (i <= last && ft_strchr(set, s1[last]))
		last--;
	s = (char *)malloc(sizeof(char) * (2 + last - i));
	if (!s)
		return (0);
	ft_strlcpy(s, &s1[i], last - i + 2);
	return (s);
}
