#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int positive_or_negative(void)
{
	int i;
	srand(time(0));
	i=rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i == 0)
	{
	printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
	printf("%i is negative\n", i);
	}
	else
	{printf("%i is positive\n", i);
	}
	return (0);
}
