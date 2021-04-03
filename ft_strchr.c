/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:57:04 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/02 10:57:07 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    char *scpy;

    scpy = (char*)s;
    i = 0;
    while (scpy[i])
    {
        if (scpy[i] == c)
            return (scpy + i);
        i++;
    }
    return (NULL);
}
