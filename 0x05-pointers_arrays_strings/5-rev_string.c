#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i > 0; i--)
	{
		_putchar(s[i]);
	}
}
