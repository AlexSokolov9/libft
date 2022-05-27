/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asokolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:18:36 by asokolov          #+#    #+#             */
/*   Updated: 2021/12/18 22:25:06 by asokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cp;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	cp = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&cp, del);
			free(lst);
			free(cp);
			free(tmp);
			return (NULL);
		}
		ft_lstadd_back(&cp, tmp);
		lst = lst->next;
	}
	return (cp);
}
