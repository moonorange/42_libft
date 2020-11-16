/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:28 by kkida             #+#    #+#             */
/*   Updated: 2020/11/15 15:31:53 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	int		idx;

	len = ft_strlen(s);
	idx = 0;
	while (len >= idx)
	{
		if (s[len - idx] == c)
			return ((char *)&s[len - idx]);
		idx++;
	}
	return (NULL);
}
