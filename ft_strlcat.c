/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:09:16 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/05 17:54:06 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		lendst;
	int		lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	if (dstsize < lensrc)
		return (dstsize + lensrc);
	while (src[i] && lendst + i < dstsize)
	{
		dst[i + lendst] = src[i];
		i++;
	}
	if ((lendst + i) == dstsize && lendst < dstsize)
		dst[--i] = '\0';
	else
		dst[i] = '\0';
	if (i == dstsize)
		dst[i] = '\0';
	return (lendst + ft_strlen(src));
}
