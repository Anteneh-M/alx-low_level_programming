#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	while (s[j] != 0)
	{
		j++;
	}
	while (j > 0)
	{
		j--;
		_putchar(s[j]);
	}
	_putchar('\n');
