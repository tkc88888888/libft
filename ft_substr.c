/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:59:10 by ktan              #+#    #+#             */
/*   Updated: 2022/10/18 23:54:52 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	sublen;

	if (!s)
		return (NULL);
	sublen = (size_t)ft_strlen(s);
	if (sublen < start)
		return (ft_strdup(""));
	if (sublen <= len)
		len = sublen - start;
	dup = malloc((sizeof(char) * len) + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s + start, len + 1);
	return (dup);
}
