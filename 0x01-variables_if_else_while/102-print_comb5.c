#include <stdio.h>
/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, j, x, y, val1, val2;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			x = 48;
			while (x < 58)
			{
				y = 48;
				while (y < 58)
				{
					val1 = i * 10 + j;
					val2 = x * 10 + y;
					if (val1 < val2)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(x);
						putchar(y);
						if (i == 57 && j == 56 && x == 57 && y == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					y++;
				}
				x++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
