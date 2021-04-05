/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:09:16 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/05 16:38:56 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*srccpy;
	size_t	i;
	int		lendst;

	srccpy = (char *)src;
	i = 0;
	lendst = ft_strlen(dst);
	while (i < dstsize)
	{
		dst[i + lendst] = srccpy[i];
		i++;
		if (i == dstsize - 1)
			break ;
	}
	if (i == dstsize)
		dst[i] = '\0';
	return (lendst + ft_strlen(src));
}
