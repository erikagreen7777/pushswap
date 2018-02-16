#include "../pushswap.h"

int main(int argc, char **argv)
{
	int	temp[argc - 1];
	char **str;
	int i;
	
	str = NULL;
	i = 0;
	if (argc > 0)
		;

	str = ft_strsplit(argv[1], ' ');
	while (str[i])
	{
		temp[i] = ft_atoi(str[i]);
		printf("temp[%d]: %d\n", i, temp[i]);
		i++;
	}
	return (0);
}