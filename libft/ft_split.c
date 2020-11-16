/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:33:32 by kkida             #+#    #+#             */
/*   Updated: 2020/11/15 18:15:57 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		make_array(const char *str, char **strs_array, int str_len, int idx)
{
	int str_i;

	strs_array[idx] = (char *)malloc((str_len + 1) * sizeof(char));
	str_i = 0;
	while (str_i < str_len)
	{
		strs_array[idx][str_i] = str[str_i];
		str_i++;
	}
	strs_array[idx][str_i] = '\0';
}

static void		split_strs(const char *str, char c, char **strs_array)
{
	int	behind;
	int	forward;
	int	idx;

	behind = 0;
	forward = 0;
	idx = 0;
	while (str[forward] != '\0')
	{
		if (str[forward] == c && forward == behind)
			behind++;
		else if (str[forward] == c && forward != behind)
		{
			make_array(&str[behind], strs_array, forward - behind, idx);
			behind = forward + 1;
			idx++;
		}
		forward++;
	}
	if (behind < forward)
	{
		make_array(&str[behind], strs_array, forward - behind, idx);
		idx++;
	}
	strs_array[idx] = 0;
}

static int		count_sep_num(const char *str, char c)
{
	int		idx;
	int		cons;
	int		sep_num;

	idx = 0;
	cons = 1;
	sep_num = 0;
	while (str[idx] == c)
		idx++;
	while (str[idx])
	{
		if (str[idx] == c)
		{
			if (cons != 1)
				sep_num++;
			cons = 1;
		}
		else
			cons = 0;
		idx++;
	}
	return (sep_num);
}

char 		**ft_split(char const *s, char c)
{
	int		sep_num;
	char	**strs_array;

	if (!s)
		return (NULL);
	sep_num = 0;
	sep_num = count_sep_num(s, c);
	strs_array = (char **)malloc(sizeof(char *) * (sep_num + 2));
	if (!strs_array)
		return (NULL);
	split_strs(s, c, strs_array);
	return (strs_array);
}
