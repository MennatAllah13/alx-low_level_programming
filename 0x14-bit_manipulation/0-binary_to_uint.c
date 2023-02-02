#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int twos = 1, remain;

	if (!b)
		return (0);

	while (b)
	{
		remain = b % 10;
		if (remain != 0 || remain != 1)
			return (0);
		num = num + (twos * remain);
		b = b / 10;
		twos = twos * 2;
	}

	return (num);
}
