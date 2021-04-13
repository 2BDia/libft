/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:09:03 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/06 16:09:03 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	setvars(int *i, int *j, int *l, int *g)
{
	*i = 0;
	*j = 0;
	*l = 0;
	*g = 0;
}

static int	alloc(char **strs, int j, int g)
{
	strs[j] = malloc(sizeof(char) * (g + 1));
	if (!strs[j])
	{
		while (j != 0)
			free(strs[--j]);
		free(strs);
		return (0);
	}
	return (1);
}

static void	nextword(const char *s, char c, int *i, int *l)
{
	while (s[*i] == c)
	{
		*i += 1;
		*l += 1;
	}
}

static int	alnput(const char *s, char **strs, char c)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	g;

	setvars(&i, &j, &l, &g);
	while (s[i])
	{
		if (i == 0)
			nextword(s, c, &i, &l);
		while (s[i] != c && s[i])
			i++;
		g = i - l;
		if (alloc(strs, j, g) == 0)
			return (0);
		k = 0;
		while (k < g)
			strs[j][k++] = s[l++];
		strs[j][k] = '\0';
		if (c != '\0')
			nextword(s, c, &i, &l);
		j++;
	}
	strs[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	while (s[k])
	{
		if ((s[k + 1] == c || s[k + 1] == '\0') && s[k] != c)
			i++;
		k++;
	}
	strs = (char **)malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	if (i == 0)
		strs[0] = NULL;
	else if (alnput(s, strs, c) == 0)
		return (NULL);
	return (strs);
}
