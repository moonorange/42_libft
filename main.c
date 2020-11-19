#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	argc = 0;
	char **tmp = argv;
	tmp = NULL;
	// printf("%s\n",ft_strtrim(argv[1], argv[2]));
	// char **str = ft_split(argv[1], argv[2][0]);
	// while (*str)
	// {
	// 	printf("%s\n", *str);
	// 	str++;
	// }
	// printf("%s\n", ft_strdup(argv[1]));
	// printf("%s\n", strdup(argv[1]));
	// printf("%s\n", strdup(NULL));
	// printf("%s\n", ft_strdup(NULL));

	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	// printf("%s\n", ft_strrchr("abcdefghijfklmn", (1 << 10) + 'f'));
	// printf("%s\n", strrchr("abcdefghijfklmn", (1 << 10) + 'f'));
	return (0);
}
