#include "main.h"
/**
 * rev_string - prints in reverse a string.
 * @s: tested string
 * Return: always 0.
 */
void rev_string(char *s)
{
	int length, j;
	char a;

<<<<<<< HEAD
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	while (s[j] != 0)
=======
	length = 0;
	while (*(s + length) != '\0')
>>>>>>> c114892f1f0e28a8c9827bef59279054780e10d1
	{
		length++;
	}
	for (j = 0; j < (length / 2); j++)
	{
		a = *(s + j);
		*(s + j) = *(s + length - j - 1);
		*(s + length - j - 1) = a;
	}
<<<<<<< HEAD
	_putchar('\n');
=======
>>>>>>> c114892f1f0e28a8c9827bef59279054780e10d1
}
