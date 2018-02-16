#include "../pushswap.h"

int main(int argc, char **argv)
{
	char **str;
	str = NULL;
	int i;
	i = 0;
	if (argc > 0)
		;

	str = ft_strsplit(argv[1], ' ');
	while (str[i])
	{
		printf("str[%d]: %s\n", i, str[i]);
		i++;
	}
	return (0);
}