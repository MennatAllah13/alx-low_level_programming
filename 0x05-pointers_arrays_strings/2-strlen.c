#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	_putchar(count);
}
