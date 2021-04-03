/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:54:50 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/02 10:54:52 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *srccpy;
    char *destcpy;
    unsigned int i;

    srccpy = (char*)src;
    destcpy = (char*)dest;
    i = 0;
    while (i < n)
    {
        destcpy[i] = srccpy[i];
        i++;
    }
    return (dest);
}
