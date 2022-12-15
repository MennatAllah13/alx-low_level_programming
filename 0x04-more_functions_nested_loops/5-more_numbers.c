#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + 48);
			}
			_putchar(j % 10 + 48);
			j++;
		}
		_putchar('\n');
	}
}
