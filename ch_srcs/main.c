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

/*
 false test: "$>./checker 0 9 1 8 2 7 3 6 4 5" then write the following valid action list
"[sa, pb, rrr]". Checker should display "KO"
*/

/*true test:  "$>./checker 0 9 1 8 2" then write the following valid action list
"[pb, ra, pb, ra, sa, ra, pa, pa]". The program should
display "OK".
*/

//tell zsh to do parameter expansion