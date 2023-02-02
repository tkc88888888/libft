/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:55:35 by ktan              #+#    #+#             */
/*   Updated: 2023/02/03 01:36:58 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(const char *s, char c)
{
	int		word;

	word = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			++word;
		while (*s && *s != c)
			s++;
	}
	return (word);
}

static char	**free_list(char **list, size_t index)
{
	while (index--)
	{
		free(list[index]);
		list[index] = NULL;
	}
	free(list);
	list = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	int		len;
	char	**list;

	if (!s)
		return (NULL);
	word = 0;
	list = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!list)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			list[word++] = ft_substr(s - len, 0, len);
			if (!list[word - 1])
				return (free_list(list, word));
		}
	}
	list[word] = 0;
	return (list);
}
