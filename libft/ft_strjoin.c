/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:33:27 by kkida             #+#    #+#             */
/*   Updated: 2020/11/15 15:48:17 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sum_len;
	char	*str;
	size_t	s1_len;
	size_t	s2_i;

	if (!s1 || !s2)
		return (NULL);
	sum_len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((sum_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	ft_memcpy(str, s1, s1_len);
	s2_i = 0;
	while (s2[s2_i])
	{
		str[s1_len] = s2[s2_i];
		s1_len++;
		s2_i++;
	}
	str[s1_len] = '\0';
	return (str);
}
