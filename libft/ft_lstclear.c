/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 13:23:06 by kkida             #+#    #+#             */
/*   Updated: 2020/11/20 22:17:29 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !(*del))
		return ;
	if (!*lst)
		return ;
	ft_lstclear(&((*lst)->next), (*del));
	ft_lstdelone(*lst, (*del));
	*lst = NULL;
}
