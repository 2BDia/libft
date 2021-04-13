/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:09:16 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/13 19:07:59 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;

	j = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (lendst == 0)
		return (lensrc);
	if (n < lendst)
		return (lensrc + lendst);
	i = lendst;
	while (src[j] && j + lendst < n)
		dst[i++] = src[j++];
	if ((lendst + j) == n && lendst < n)
		dst[--i] = '\0';
	else
		dst[i] = '\0';
	return (lensrc + lendst);
}
