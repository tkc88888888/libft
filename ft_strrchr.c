/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:58:54 by ktan              #+#    #+#             */
/*   Updated: 2022/10/20 17:02:43 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (!ft_strchr(s, c))
		return (0);
	while (ft_strchr(s, c))
		if (!*s++)
			return ((char *)--s);
	return ((char *)--s);
}
