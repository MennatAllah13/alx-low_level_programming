#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows 0
 *
 * @c - input character in ASCII
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
