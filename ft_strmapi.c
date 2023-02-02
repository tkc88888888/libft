/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:56:33 by ktan              #+#    #+#             */
/*   Updated: 2023/02/02 22:12:37 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		*(result + i) = f(i, *s++);
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
