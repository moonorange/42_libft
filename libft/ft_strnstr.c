/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:22 by kkida             #+#    #+#             */
/*   Updated: 2020/11/15 15:36:46 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_idx;
	size_t	l_idx;

	b_idx = 0;
	l_idx = 0;
	while (big[b_idx] && (b_idx < len))
	{
		while ((big[b_idx + l_idx] == little[l_idx])
				&& little[l_idx]
				&& ((b_idx + l_idx) < len))
			l_idx++;
		if (!little[l_idx])
			return ((char *)&big[b_idx]);
		l_idx = 0;
		b_idx++;
	}
	if (!little[0])
		return ((char *)&big[b_idx]);
	return (NULL);
}
