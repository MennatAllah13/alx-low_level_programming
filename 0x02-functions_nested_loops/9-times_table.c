#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */

void times_table(void)
{
	int i, j, val;

	/*
	 * _putchar('0');
	 * _putchar(',');
	 * _putchar(' ');
	*/
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			val = i * j;
			if (val <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(val + 48);
			}
			else
			{
				_putchar(val / 10 + 48);
				_putchar(val % 10 + 48);
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
