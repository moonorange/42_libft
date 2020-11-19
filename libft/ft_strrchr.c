/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:33:28 by kkida             #+#    #+#             */
/*   Updated: 2020/11/17 21:50:36 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	int		idx;

	last = NULL;
	idx = 0;
	while (s[idx])
	{
		if (s[idx] == (char)c)
			last = (char*)&s[idx];
		idx++;
	}
	if (s[idx] == (char)c)
		last = (char*)&s[idx];
	return (last);
}
