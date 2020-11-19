/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 13:23:15 by kkida             #+#    #+#             */
/*   Updated: 2020/11/17 20:32:22 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*ret;
	t_list	*tmp;

	if (!lst || !f)
		return (lst);
	if (!(ret = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	tmp = ret;
	while (lst)
	{
		if (!(tmp->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (ret);
}
