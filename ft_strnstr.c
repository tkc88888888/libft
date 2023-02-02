/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:58:40 by ktan              #+#    #+#             */
/*   Updated: 2022/10/20 00:58:08 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	shortlen;

	if (!len || *(big + 1))
		if (!*little)
			return ((char *)big);
	shortlen = ft_strlen(little);
	if (len < shortlen || ft_strlen(big) < shortlen)
		return (0);
	while (*big && (1 - shortlen + len--))
		if (!ft_strncmp(big++, little, shortlen))
			return ((char *)--big);
	return (0);
}
