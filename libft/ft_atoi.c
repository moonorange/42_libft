/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:52:10 by kkida             #+#    #+#             */
/*   Updated: 2020/11/19 19:00:33 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int		ft_atoi(const char *str)
{
	long long int	ans;
	int				sign;
	long long int	ov_flow;

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
	while (ft_isdigit(*str))
	{
		ov_flow = ans * 10 + (*str - '0');
		if (ov_flow < ans)
			return ((sign + 1) / (-2));
		else
			ans = ov_flow;
		str++;
	}
	return (int)(ans * sign);
}
