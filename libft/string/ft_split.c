/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:48:26 by crebelo-          #+#    #+#             */
/*   Updated: 2023/04/23 16:48:26 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// String to be split and delimiter character used to split string
// Allocated memory to new array that 
// will contain the split string and will be returned
// Ends with null pointer.
#include "../libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			word++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (word);
}

static char	*word_alloc(char const *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)ft_calloc((end - start) + 1, 1);
	if (word)
	{
		while (start < end)
		{
			word[i++] = s[start++];
		}
		return (word);
	}
	return (0);
}

static char	**create_split(char const *s, char **split, int nwords, char c)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (i < (int)ft_strlen(s) && j < nwords)
	{
		while (s[i] == c && i < (int)ft_strlen(s))
			i++;
		if (i == (int)ft_strlen(s))
			return (split);
		start = i;
		while (s[i] != c && i < (int)ft_strlen(s))
			i++;
		split[j] = word_alloc(s, start, i);
		start = i++;
		j++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		nwords;

	nwords = count_words(s, c);
	split = (char **)ft_calloc((nwords + 1), (sizeof(char *)));
	if (split)
	{
		split = create_split(s, split, nwords, c);
		return (split);
	}
	return (0);
}
