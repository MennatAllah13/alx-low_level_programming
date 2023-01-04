#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 0;

	while (i % 10 == 0)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
