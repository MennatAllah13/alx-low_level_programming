#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 91 + 25; i >= 91; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
