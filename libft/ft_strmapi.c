/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:33:17 by kkida             #+#    #+#             */
/*   Updated: 2020/11/15 15:51:11 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	idx;

	idx = 0;
	if (!s || !f)
		return (NULL);
	ans = ft_strdup(s);
	if (!ans)
		return (NULL);
	while (s[idx])
	{
		ans[idx] = f(idx, s[idx]);
		idx++;
	}
	return (ans);
}
