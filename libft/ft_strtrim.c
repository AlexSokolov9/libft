/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:53:06 by asokolov          #+#    #+#             */
/*   Updated: 2021/12/15 20:28:22 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = (int)ft_strlen(s1) - 1;
	if (j - i < 0)
	{
		dest = (char *)malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i != (int)ft_strlen(s1))
	{
		while (&s1[j] > 0 && ft_strchr(set, s1[j]))
			j--;
	}
	dest = ft_substr(s1, i, j - i + 1);
	return (dest);
}
