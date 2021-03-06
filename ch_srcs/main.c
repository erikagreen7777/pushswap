#include "../pushswap.h"

void	parse_str_argv(int argc, char **argv)
{
	int i;
	int	temp[argc - 1];
	char **str;

	str = ft_strsplit(argv[1], ' ');
	i = 0;
	while (str[i])
	{	
		temp[i] = ft_atoi(str[i]);
		printf("temp[%d]: %d\n", i, temp[i]);
		i++;
	}
}
void	parse_input(int argc, char **argv)
{
	int	temp[argc - 1];
	char **str;
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
}

int main(int argc, char **argv)
{
	if (argc > 0)
		parse_input(argc, argv);
	else
		ft_putchar('\n');

	return (0);
}

/*
 false test: "$>./checker 0 9 1 8 2 7 3 6 4 5" then write the following valid action list
"[sa, pb, rrr]". Checker should display "KO"
*/

/*true test:  "$>./checker 0 9 1 8 2" then write the following valid action list
"[pb, ra, pb, ra, sa, ra, pa, pa]". The program should
display "OK".
*/

//tell zsh to do parameter expansion