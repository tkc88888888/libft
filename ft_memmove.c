/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:54:15 by ktan              #+#    #+#             */
/*   Updated: 2022/10/20 00:26:44 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*p;

	if (dest == src || !n)
		return (dest);
	p = dest;
	if (src < dest)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (p);
}
