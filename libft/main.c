#include "libft_code/libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	argc = 0;
	char **ans = ft_split(argv[1], argv[2]);
	int idx = 0;
	while (ans[idx])
	{
		printf("%s\n", ans[idx]);
		idx++;
	}
	return (1);
}
