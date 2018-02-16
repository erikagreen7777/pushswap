#include "../pushswap.h"

int main(int argc, char **argv)
{
	int	temp[argc - 1];
	char **str;
	int i;
	int j;
	
	str = NULL;
	j = 0;
	if (argc > 0)
		;
	printf("argc: %d\n", argc);
	if (argc == 2)
	{
		str = ft_strsplit(argv[1], ' ');
		i = 0;
		while (str[i])
		{	
			temp[i] = ft_atoi(str[i]);
			printf("temp[%d]: %d\n", i, temp[i]);
			i++;
		}
	}
	else if (argc > 2)
	{
		i = 1;
		while (i < argc)
		{
			temp[j] = ft_atoi(argv[i]);
			j++;
			i++;
		}
		i = 0;
		while (i < argc - 1)
		{
			printf("temp[%d]: %d\n", i, temp[i]);
			i++;
		}
	}



	return (0);
}