#include "libft_code/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int argc, char **argv)
{
	argc = 0;
	// char **ans = ft_split(argv[1], argv[2]);
	// int idx = 0;
	// while (ans[idx])
	// {
	// 	printf("%s\n", ans[idx]);
	// 	idx++;
	// }

	int itoa_test = atoi(argv[1]);
	char str[20];
	printf("mine: %s\n", ft_itoa(itoa_test));
	printf("orig: %s\n", itoa(itoa_test, str, 10));
	return (1);
}
