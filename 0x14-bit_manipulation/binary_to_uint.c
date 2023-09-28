#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int twos = 1, i = 0;

	if (b == 0)
		return (0);

	while (b[i])
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
		{
			num = num + twos;
			twos = twos * 2;
		}
	}
	return (num);
}
