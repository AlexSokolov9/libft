/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:15:24 by asokolov          #+#    #+#             */
/*   Updated: 2021/12/18 19:03:37 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*a;

	a = *alst;
	if (!new || !*alst)
	{
		*alst = new;
		return ;
	}
	a = ft_lstlast(a);
	(*a).next = new;
}
