/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:33:06 by kkida             #+#    #+#             */
/*   Updated: 2020/11/20 19:41:05 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		idx;

	idx = 0;
	start = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	end = (int)ft_strlen(s1);
	while (s1[start] && ft_is_inset(s1[start], set))
		start++;
	while (end > start && ft_is_inset(s1[end - 1], set))
		end--;
	if (!(str = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	while (start < end)
		str[idx++] = s1[start++];
	str[idx] = '\0';
	return (str);
}
