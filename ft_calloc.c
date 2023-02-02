/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:50:42 by ktan              #+#    #+#             */
/*   Updated: 2022/10/20 00:15:43 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	ofroot;

	if ((((size_t)-1) / 641U) / 6700417U < UINT32_MAX)
		ofroot = UINT16_MAX;
	else
		ofroot = UINT32_MAX;
	if ((nmemb > ofroot || size > ofroot) && (((size_t)-1) / nmemb < size))
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}
