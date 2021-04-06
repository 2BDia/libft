/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:09:16 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/06 13:32:05 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

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
		dst[lendst + --i] = '\0';
	else
		dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
