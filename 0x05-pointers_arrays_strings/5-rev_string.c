#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
