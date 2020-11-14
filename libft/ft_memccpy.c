/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:34:02 by kkida             #+#    #+#             */
/*   Updated: 2020/11/08 17:27:41 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			idx;
	unsigned char	*usrc;
	unsigned char	*udest;
	unsigned char	uc;

	if (dest == NULL && src == NULL)
		return (NULL);
	idx = 0;
	usrc = (unsigned char *)src;
	udest = (unsigned char *)dest;
	uc = (unsigned char)c;
	while (idx < n)
	{
		udest[idx] = usrc[idx];
		if (usrc[idx] == uc)
			return (&udest[idx++]);
		idx++;
	}
	return (NULL);
}
