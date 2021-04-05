/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:01:25 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/05 12:22:26 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1cpy;
	char	*s2cpy;

	i = 0;
	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	while (i < n)
	{
		if (s1cpy[i] != s2cpy[i])
			return ((s1cpy[i] - '0') - (s2cpy[i] - '0'));
		i++;
	}
	return (0);
}
