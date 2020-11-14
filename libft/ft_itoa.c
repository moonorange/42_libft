/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:33:55 by kkida             #+#    #+#             */
/*   Updated: 2020/11/14 14:17:25 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digit_count(int nbr)
{
	int		digit;

	digit = 0;
	if (nbr <= 0)
		digit++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		digit++;
	}
	return (digit);
}

char			*ft_itoa(int n)
{
	size_t	idx;
	size_t	dig_n;
	char	*str;

	idx = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dig_n = ft_digit_count(n);
	str = (char *)malloc(sizeof(char) * (dig_n + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		idx++;
	}
	str[dig_n] = '\0';
	while (idx < dig_n--)
	{
		str[dig_n] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
