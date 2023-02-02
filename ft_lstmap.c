/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktan <ktan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:53:03 by ktan              #+#    #+#             */
/*   Updated: 2022/10/15 23:38:31 by ktan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*copynode;
	t_list	*newlist;

	newlist = 0;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		copynode = ft_lstnew(f(lst -> content));
		if (!copynode)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, copynode);
		lst = lst -> next;
	}
	return (newlist);
}
