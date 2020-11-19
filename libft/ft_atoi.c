/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:52:10 by kkida             #+#    #+#             */
/*   Updated: 2020/11/18 19:31:45 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int		ft_atoi(const char *str)
{
	long long int	ans;
	int				sign;
	long int		digit;
	long long int	ov_flow;

	sign = 1;
	digit = 0;
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
		digit++;
		ov_flow = ans * 10 + (*str - '0');
		if (ov_flow < ans)
			return ((sign + 1) / (-2));
		else
			ans = ov_flow;
	}
	return (int)(ans * sign);
}
