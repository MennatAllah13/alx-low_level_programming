#include "main.h"
#include <stddef.h>

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == NULL)
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count ++;
	}
}
