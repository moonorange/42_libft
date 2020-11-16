#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	argc = 0;
	// printf("%s\n",ft_strtrim(argv[1], argv[2]));
	// char **str = ft_split(argv[1], argv[2][0]);
	// while (*str)
	// {
	// 	printf("%s\n", *str);
	// 	str++;
	// }
	printf("%s\n", ft_strdup(argv[1]));
	printf("%s\n", strdup(argv[1]));
	printf("%s\n", strdup(NULL));
	printf("%s\n", ft_strdup(NULL));
	return (0);
}
