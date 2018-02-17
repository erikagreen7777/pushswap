#include "../pushswap.h"

int		*parse_str_argv(int argc, char **argv)
{
	int i;
	int	temp[argc - 1];
	int *ret;
	char **str;

	str = ft_strsplit(argv[1], ' ');
	i = 0;
	while (str[i])
	{	
		temp[i] = ft_atoi(str[i]);
		printf("temp[%d]: %d\n", i, temp[i]);
		i++;
	}
	ret = temp;
	return (ret);

}
int		*parse_input(int argc, char **argv)
{
	int	temp[argc - 1];
	char **str;
	int *ret;
	int i;
	int j;
	
	str = NULL;
	j = 0;
	// printf("argc: %d\n", argc);
	if (argc == 2)
		parse_str_argv(argc, argv);
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
	ret = temp;
	return (ret);
}

int main(int argc, char **argv)
{
	int 	*stacka;

	
	if (argc == 2)
		stacka = parse_str_argv(argc, argv);
	else if (argc > 0)	
		stacka = parse_input(argc, argv);
	else
		ft_putchar('\n');

	return (0);
}