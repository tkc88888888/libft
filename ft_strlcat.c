/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:56:10 by ktan              #+#    #+#             */
/*   Updated: 2022/10/20 00:57:45 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	if (!dst && !size)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		return (size + ft_strlen(src));
	srclen = ft_strlcpy(dst + dstlen, src, size - dstlen);
	return (dstlen + srclen);
}
