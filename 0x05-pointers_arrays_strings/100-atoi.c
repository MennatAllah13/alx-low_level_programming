#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
	unsigned int num = 0, sign = 1, len = 0, count = 0, n = 1, i;

	while (s + len)
	{
		if (*(s + len) == '-')
			sign = sign * -1;
		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			if (count > 0)
				n = n * 10;
			count++;
		}
		if (count > 0 && (*(s + len) < '0' || *(s + len) > '9'))
			break;
		len++;
	}
	for (i = len - count; i < len; i++)
	{
		num = num + ((*(s + i) - 48) * n);
		n = n / 10;
	}
	return (num * sign);
}
