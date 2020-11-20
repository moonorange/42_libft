/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:52:10 by kkida             #+#    #+#             */
/*   Updated: 2020/11/20 19:32:44 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_str_to_num(const char *str)
{
	long long	num;
	long long	ov_div;
	int			ov_mod;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	num = 0;
	while (ft_isdigit(*str))
	{
		if (ov_div < num)
			return (-1);
		if (ov_div == num && ov_mod < *str - '0')
			return (-1);
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (num);
}

int					ft_atoi(const char *str)
{
	long long int	ans;
	int				sign;

	sign = 1;
	if (!*str)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	ans = 0;
	ans = ft_str_to_num(str);
	if (sign == -1 && ans == -1)
		return (0);
	return (int)(ans * sign);
}
