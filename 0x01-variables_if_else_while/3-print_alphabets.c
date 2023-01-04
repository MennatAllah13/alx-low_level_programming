#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* char alp[26] = "abcdefghijklmnopqrstuvwxyz";*/
	int i;

	for (i = 97; i < 97 + 26; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 65 + 26; i++)
	{
		putchar(i);
	}
	return (0);
}
