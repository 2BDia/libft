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

static int	checkspace(const char *str)
{
	if (*str == ' ' || *str == '\n' || *str == '\f'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		return (1);
	else
		return (0);
}

static void	checksign(const char *nptr, int *i, int *sign)
{
	if (nptr[*i] == '-')
	{
		*sign = 1;
		*i += 1;
	}
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		i;
	int		rtrnval;

	sign = 0;
	i = 0;
	rtrnval = 0;
	if ((nptr[i] >= '0' && nptr[i] <= '9') || (nptr[i] == '-')
		|| (nptr[i] == '+') || checkspace(nptr + i))
	{
		while (checkspace(nptr + i) || nptr[i] == '+')
		{
			if (nptr[i] == '+' && checkspace(nptr + (i + 1)))
				return (0);
			i++;
		}
		checksign(nptr, &i, &sign);
		while (nptr[i] >= '0' && nptr[i] <= '9')
			rtrnval = (rtrnval * 10) + (nptr[i++] - '0');
		if (sign == 1)
			rtrnval *= -1;
		return (rtrnval);
	}
	else
		return (0);
}
