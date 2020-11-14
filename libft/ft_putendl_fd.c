/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:33:43 by kkida             #+#    #+#             */
/*   Updated: 2020/11/09 22:00:46 by kkida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		idx;

	idx = 0;
	if (s)
		while (s[idx])
		{
			write(fd, &s[idx], 1);
			idx++;
		}
	write(fd, "\n", 1);
}
