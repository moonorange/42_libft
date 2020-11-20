/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 13:22:58 by kkida             #+#    #+#             */
/*   Updated: 2020/11/20 22:17:54 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*lst_el;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		lst_el = ft_lstlast(*lst);
		lst_el->next = new;
	}
}
