#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int count = 0;
	int i;

	if (str != '\0')
        {
		while (str[count] != '\0')
		{
			count++;
		}
		for (i = (count - 1) / 2 + 1; i <= count; i++)
		{
			_putchar(str[i]);
	
		}
	}
	else
	{
		_putchar('\n');
	}
}
