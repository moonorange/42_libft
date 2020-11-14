/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:58 by kkida             #+#    #+#             */
/*   Updated: 2020/11/08 10:52:01 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*us1;
	unsigned char	*us2;

	idx = 0;
	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	while (idx < n && us1[idx] == us2[idx])
		idx++;
	if (idx == n)
		return (0);
	else
		return (us1[idx] - us2[idx]);
}
