/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:50:04 by ktan              #+#    #+#             */
/*   Updated: 2022/10/20 01:52:44 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

int	ft_atoi(const char *nptr)
{
	int				sign;
	long long int	res;

	sign = 1;
	res = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*(nptr++) == '-')
			sign *= -1;
	while (ft_isdigit(*nptr))
	{
		if ((sign == 1) && res > ((INT64_MAX - (*nptr - '0')) / 10))
			return (-1);
		if ((sign == -1) && (res * sign) < ((INT64_MIN + (*nptr - '0')) / 10))
			return (0);
		res = (res * 10) + (*nptr++ - '0');
	}
	return ((int)res * sign);
}
