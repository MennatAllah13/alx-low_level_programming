#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string
 * Return: char*
 */
char *leet(char *str)
{
	int i = 0, x[52];

	x[0] = 4;
	x[32] = 4;
	x[4] = 3;
	x[36] = 3;
	x[14] = 0;
	x[46] = 0;
	x[11] = 1;
	x[43] = 1;
	x[19] = 7;
	x[51] = 7;

	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E'
			       || str[i] == 'o' || str[i] == 'O' || str[i] == 't' ||
				str[i] == 'T' || str[i] == 'l' || str[i] == 'L')
			str[i] = x[str[i] - 'A'];
		i++;
	}
}
