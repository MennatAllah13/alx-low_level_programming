#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48, y, z;

	while (x < 56)
	{
		y = 48;
		while (y < 57)
		{
			z = 48;
			while (z < 58)
			{
				if (x != y && x != z && y != z && x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == 55 && y == 56 && z == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
