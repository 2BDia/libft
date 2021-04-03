/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:38:56 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/03 19:47:03 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	char	*s1cpy;
	char	*s2cpy;

	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	i = 0;
	while (s1cpy[i] == s2cpy[i] && s1cpy[i] != '\0' && s2cpy[i] != '\0')
		i++;
	if (s1cpy[i] != s2cpy[i])
		return (s1cpy[i] - s2cpy[i]);
	else
		return (0);
}
