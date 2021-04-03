/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:56:48 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/02 10:56:49 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
    while (dest[j] != '\0')
        j++;
	while (i < n && src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}
