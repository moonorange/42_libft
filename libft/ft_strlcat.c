/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:43 by kkida             #+#    #+#             */
/*   Updated: 2020/11/15 15:35:14 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	dest_idx;
	size_t	src_idx;

	dest_idx = 0;
	while (dest[dest_idx] != '\0')
		dest_idx++;
	src_idx = 0;
	while (src[src_idx] != '\0' && dest_idx + src_idx + 1 < dstsize)
	{
		dest[dest_idx + src_idx] = src[src_idx];
		src_idx++;
	}
	dest[dest_idx + src_idx] = '\0';
	while (src[src_idx] != '\0')
		src_idx++;
	if (dest_idx > dstsize)
		return (dstsize + src_idx);
	else
		return (dest_idx + src_idx);
}
