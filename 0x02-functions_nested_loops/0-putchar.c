#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
char anteneh[] = "_putchar";

int y;

for (y = 0; y < 8; y++)
{
_putchar(anteneh[y]);
}
_putchar('\n');
return (0);
}
