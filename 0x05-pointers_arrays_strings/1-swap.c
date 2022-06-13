#include "main.h"
/** 1-swap change the value of a and b
 * a to b
 * b to a
 *
 **/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

