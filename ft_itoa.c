/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:51:54 by ktan              #+#    #+#             */
/*   Updated: 2022/10/20 01:59:42 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n, int base)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n && ++len)
		n /= base;
	return (len);
}

static char	*ft_putnbr(int n, char *result, int *i)
{
	if (n < 0)
		result[(*i)++] = '-';
	if (n / 10)
		ft_putnbr((n / 10) * ((n > 0) - (n < 0)), result, i);
	result[(*i)++] = (n % 10) * ((n > 0) - (n < 0)) + '0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_numlen(n, 10);
	result = malloc (sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_putnbr(n, result, &i);
	result[len] = 0;
	return (result);
}
