/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:56:17 by ktan              #+#    #+#             */
/*   Updated: 2022/10/16 02:10:06 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (*src && (size-- - 1))
			*dst++ = *src++;
		*dst = '\0';
	}
	return (srclen);
}
