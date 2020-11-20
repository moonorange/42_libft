/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 13:23:15 by kkida             #+#    #+#             */
/*   Updated: 2020/11/20 22:13:52 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*list;
	t_list	*list_top;

	if (!lst || !(*f))
		return (lst);
	if (!(list = ft_lstnew((*f)(lst->content))))
		return (NULL);
	list_top = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&list_top, del);
			return (NULL);
		}
		list = list->next;
	}
	return (list_top);
}
