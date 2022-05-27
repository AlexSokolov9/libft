/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:56:16 by asokolov          #+#    #+#             */
/*   Updated: 2021/12/09 08:36:52 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_malloc_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		len = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_dest(char *dest, int n, int i)
{
	dest[i] = '\0';
	i--;
	if (n == 0)
		dest[i] = '0';
	if (n == -2147483648)
	{
		dest[i--] = '8';
		n = n / 10;
	}
	if (n < 0)
	{
		dest[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		dest[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dest;

	i = ft_malloc_len(n);
	dest = (char *)malloc(sizeof (char) * i + 1);
	if (!dest)
		return (NULL);
	dest = ft_dest(dest, n, i);
	return (dest);
}
