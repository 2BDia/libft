/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:01:26 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/07 16:55:49 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;
	size_t	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	destcpy = (char *)dest;
	srccpy = (char *)src;
	if (destcpy > srccpy)
	{
		i = n;
		while (i > 0)
		{
			destcpy[i - 1] = srccpy[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destcpy[i] = srccpy[i];
			i++;
		}
	}
	return (destcpy);
}
