/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:55 by kkida             #+#    #+#             */
/*   Updated: 2020/11/14 22:04:44 by kkida            ###   ########.fr       */
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
		while ((int)(--len) >= 0)
		{
			udst[len] = usrc[len]
		}
	else
		while (idx < len)
		{
			udst[idx] = usrc[idx];
			idx++;
		}
	return (dst);
}
