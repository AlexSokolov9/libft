/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 05:04:13 by asokolov          #+#    #+#             */
/*   Updated: 2021/12/15 20:26:49 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*dest;
	char	*b;
	size_t	i;

	i = 0;
	b = (char *)s;
	while (n > 0)
	{
		if (*b == (char)c)
		{
			dest = b;
			return ((char *)dest);
		}
		b++;
		n--;
	}
	return (NULL);
}
