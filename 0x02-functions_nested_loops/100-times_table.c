#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */
void print_times_table(int n)
{
	int i, j, val;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				val = i * j;
				if (j == 0)
					_putchar(val + 48);
				else if (val <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(val + 48);
				}
				else if (val < 100)
				{
					_putchar(' ');
					_putchar(val / 10 + 48);
					_putchar(val % 10 + 48);
				}
				else if (val > 99)
				{
					_putchar(((val / 100) % 10) + 48);
					_putchar(((val / 10) % 10) + 48);
					_putchar((val % 10) + 48);
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
}
