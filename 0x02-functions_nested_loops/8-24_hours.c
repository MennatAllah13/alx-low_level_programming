#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int x, y, z, w;

	for (x = 48; x <= 50; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z < 54; z++)
			{
				for (w = 48; w <= 57; w++)
				{
					if (x >= 50 && y >= 52)
					{
						break;
					}
					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(z);
					_putchar(w);
					_putchar('\n');
				}
			}
		}
	}
}
