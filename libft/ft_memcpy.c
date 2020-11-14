/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:56 by kkida             #+#    #+#             */
/*   Updated: 2020/11/14 11:01:57 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*usrc;
	unsigned char	*udest;

	if (dest == NULL && src == NULL)
		return (NULL);
	idx = 0;
	usrc = (unsigned char *)src;
	udest = (unsigned char *)dest;
	while (idx < n)
	{
		udest[idx] = usrc[idx];
		idx++;
	}
	return (dest);
}
