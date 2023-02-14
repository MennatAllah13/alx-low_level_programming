#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143, fact = 2;

	while (num)
	{
		if (num % fact == 0)
		{
			num = num / fact;
			if (num == 1)
				break;
		}
		else
			fact++;
	}
	printf("%d\n", fact);
	return (0);
}
