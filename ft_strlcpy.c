/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:30:38 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/05 15:03:42 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*srccpy;

	i = 0;
	srccpy = (char *)src;
	if (dstsize > 0 && dstsize <= ft_strlen(dst) + 1)
	{
		while (srccpy[i] && i < dstsize - 1)
		{
			dst[i] = srccpy[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
