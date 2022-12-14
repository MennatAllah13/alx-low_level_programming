#include "main.h"

/**
 * times_table - Prints the n times table
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int i, j, val;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
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
