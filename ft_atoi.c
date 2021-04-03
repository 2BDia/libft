/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:36:55 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/03 14:36:55 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkspace(char *str)
{
	if (*str == ' ' || *str == '\n' || *str == '\f'
	|| *str == '\r' || *str == '\t' || *str == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	char	*nptrcpy;
	int		sign;
	int		i;
	int		rtrnval;

	nptrcpy = (char *)nptr;
	sign = 0;
	i = 0;
	rtrnval = 0;
	if ((nptrcpy[i] >= '0' && nptrcpy[i] <= '9') || (nptrcpy[i] == '-')
	|| (nptrcpy[i] == '+') || checkspace(nptrcpy + i))
	{
		while (checkspace(nptrcpy + i) || nptrcpy[i] == '+')
			i++;
		if (nptrcpy[i] == '-')
		{
			sign = 1;
			i++;
		}
		while (nptrcpy[i] >= '0' && nptrcpy[i] <= '9')
		{
			rtrnval = (rtrnval * 10) + (nptrcpy[i] - '0');
			i++;
		}
		if (sign == 1)
			rtrnval *= -1;
		return (rtrnval);
	}
	else
		return (0);
}
