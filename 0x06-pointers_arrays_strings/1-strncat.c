#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2 = 0;

	while (*(dest + count1))
		count1++;
	while (*(src + count2) && count2 < n)
	{
		*(dest + count1) = *(src + count2);
		count1++;
		count2++;
	}
	return (dest);
}
