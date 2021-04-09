/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:09:16 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/09 14:01:38 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;

	i = 0;
	j = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i + 1 < n)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (n >= lendst)
		return (lensrc + lendst);
	else if (n <= lendst)
		return (n + lensrc);
	return (i);
}
