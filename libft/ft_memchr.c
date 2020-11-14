/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:34:00 by kkida             #+#    #+#             */
/*   Updated: 2020/11/08 13:19:21 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cus;
	unsigned char		uc;
	size_t				idx;

	cus = (const unsigned char *)s;
	uc = (unsigned char)c;
	idx = 0;
	while (idx < n)
	{
		if (cus[idx] == uc)
			return ((void *)&cus[idx]);
		idx++;
	}
	return (NULL);
}
