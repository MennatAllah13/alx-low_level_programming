#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *temp, x;

	while (s[count] != '\0')
	{
		count++;
	}

	temp = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; i > 0; j--)
		{
			x = temp[j];
			temp[j] = s[i];
			s[i] = x;
		}
	}
}
