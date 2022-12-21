#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0;
	int i, j;
	char *temp;

	while (s[count] != '\0')
	{
		count++;
	}

	temp = s;

	for (i = 0; i <= count; i++)
	{
		for (j = count - 1; j >= 0; j--)
		{
			s[i] = temp[j];
		}
	}
}
