/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:02:06 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/02 11:02:08 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mstrcmp(char *str, char *to_find, int j)
{
	int i;

	i = 0;
	while (str[j] == to_find[i] && str[j] != '\0' && to_find[i] != '\0')
	{
		i++;
		j++;
	}
	if (str[j] != to_find[i] && to_find[i] != '\0')
		return (0);
	else
		return (1);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int j;
	int i;
	char *haystackcpy;
	char *needlecpy;

	j = 0;
	i = 0;
	haystackcpy = (char*)haystack;
	needlecpy = (char*)needle;
	if (needlecpy[0] == '\0')
		return (haystackcpy);
	while (haystackcpy[j] != '\0')
	{
		if (haystackcpy[j] == needlecpy[0])
		{
			i = ft_mstrcmp(haystackcpy, needlecpy, j);
			if (i == 1)
				return (haystackcpy + j);
		}
		j++;
	}
	return (NULL);
}
