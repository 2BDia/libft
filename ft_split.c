/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:15:48 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/13 15:15:48 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	countwords(char const *s, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[k])
	{
		if ((s[k + 1] == c || s[k + 1] == '\0') && s[k] != c)
			i++;
		k++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	
}