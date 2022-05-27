/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 02:39:08 by asokolov          #+#    #+#             */
/*   Updated: 2021/12/03 03:11:24 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	j = 0;
	res = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (i < (unsigned int)n)
	{
		res = s11[j] - s22[j];
		if (res != 0)
			return (res);
		i++;
		j++;
	}
	return (0);
}
