/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:51:09 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/03 16:51:09 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *srccpy;
	char *destcpy;
	size_t i;

	srccpy = (char*)src;
	destcpy = (char*)dest;
	i = 0;
	while (srccpy && i < n && srccpy[i] != c)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	if (i == n)
		return (NULL);
	if (srccpy[i] == c)
	{
		destcpy[i] = srccpy[i];
		i++;
		return (destcpy + i);
	}
	return (NULL);
}
