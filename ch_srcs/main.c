#include "../pushswap.h"

int main(int argc, char **argv)
{
	
	// if (argc != 2)
	// 	ft_printf("argc != 2 (argv[0]: %s): KO\n", argv[0]);
	// else 
	printf("checker argc:%d\targv[1]; %s\n", argc, argv[1]);

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