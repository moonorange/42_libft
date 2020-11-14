/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:55 by kkida             #+#    #+#             */
/*   Updated: 2020/11/10 19:21:35 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			idx;
	unsigned char	*udst;
	unsigned char	*usrc;

	idx = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	if (usrc < udst)
		while (len > 0)
		{
			udst[len] = usrc[len];
			len--;
		}
	else
		while (idx < len)
		{
			udst[idx] = usrc[idx];
			idx++;
		}
	return (udst);
}
