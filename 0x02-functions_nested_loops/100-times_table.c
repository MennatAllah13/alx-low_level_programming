#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int i, j, val;

	if (n > 15 || n < 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				val = i * j;
				if (val <= n)
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

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
